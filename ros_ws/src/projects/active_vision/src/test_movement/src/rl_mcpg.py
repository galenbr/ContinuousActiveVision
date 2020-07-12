import gym
import numpy as np
from keras.models import Sequential
from keras.layers import Dense, Reshape, Flatten
from keras.optimizers import Adam
from keras.layers.convolutional import Convolution2D

#class for the policy gradient agent
class PGAgent:
    def __init__(self, state_size, action_size):
        self.state_size = state_size
        self.action_size = action_size
        self.gamma = 0.99 #discount
        self.learning_rate = 0.001
        self.states = []
        self.gradients = []
        self.rewards = []
        self.probs = []
        self.model = self._build_model()
        self.model.summary()

    def _build_model(self):
        #this is just a simple model with one conv layer and some dense layers 
        model = Sequential()
        model.add(Reshape((1, 80, 80), input_shape=(self.state_size,)))
        model.add(Convolution2D(32, 6, 6, subsample=(3, 3), border_mode='same',
                                activation='relu', init='he_uniform'))
        model.add(Flatten())
        model.add(Dense(64, activation='relu', init='he_uniform'))
        model.add(Dense(32, activation='relu', init='he_uniform'))
        model.add(Dense(self.action_size, activation='softmax'))
        #activation is softmax because we want probabilities of going in each of the 8 directions
        opt = Adam(lr=self.learning_rate)
        model.compile(loss='categorical_crossentropy', optimizer=opt)
        return model

    #keeps track of the states, rewards and gradients for each episode
    def memorize(self, state, action, prob, reward):
        y = np.zeros([self.action_size])
        y[action] = 1
        self.gradients.append(np.array(y).astype('float32') - prob)
        self.states.append(state)
        self.rewards.append(reward)

    #select an action based on current policy
    def act(self, state):
        state = state.reshape([1, state.shape[0]])
        aprob = self.model.predict(state, batch_size=1).flatten()
        self.probs.append(aprob)
        prob = aprob / np.sum(aprob)
        action = np.random.choice(self.action_size, 1, p=prob)[0]
        return action, prob

    #calculated return for an episode
    def discount_rewards(self, rewards):
        discounted_rewards = np.zeros_like(rewards)
        running_add = 0
        for t in reversed(range(0, rewards.size)):
            if rewards[t] != 0:
                running_add = 0
            running_add = running_add * self.gamma + rewards[t]
            discounted_rewards[t] = running_add
        return discounted_rewards

    #improves parameters based on gradient of performance measure
    def train(self):
        gradients = np.vstack(self.gradients)
        rewards = np.vstack(self.rewards)
        rewards = self.discount_rewards(rewards)
        reward = (reward - np.mean(rewards)) / (np.std(rewards) + 1e-7)
        gradients *= rewards
        X = np.squeeze(np.vstack([self.states]))
        Y = self.probs + self.learning_rate * np.squeeze(np.vstack([gradients]))
        self.model.train_on_batch(X, Y)
        self.states, self.probs, self.gradients, self.rewards = [], [], [], []

    def load(self, name):
        self.model.load_weights(name)

    def save(self, name):
        self.model.save_weights(name)

def preprocess(I):
    #preprocess observation into required dimension. This has to be modified
    I = I[35:195]
    I = I[::2, ::2, 0]
    I[I == 144] = 0
    I[I == 109] = 0
    I[I != 0] = 1
    return I.astype(np.float).ravel()

if __name__ == "__main__":
    env = gym.make("Pong-v0")
    state = env.reset()
    prev_x = None
    score = 0
    episode = 0

    state_size = 80 * 80
    action_size = env.action_space.n
    agent = PGAgent(state_size, action_size)
    agent.load('pong.h5')
    while True:
        env.render()

        cur_x = preprocess(state)
        #input of model is the difference between two consecutive frames
        x = cur_x - prev_x if prev_x is not None else np.zeros(state_size)
        prev_x = cur_x

        action, prob = agent.act(x)
        state, reward, done, info = env.step(action)
        score += reward
        agent.memorize(x, action, prob, reward)

        #after one episode gets done
        if done:
            episode += 1
            agent.train()
            print('Episode: %d - Score: %f.' % (episode, score))
            #reset after completing the training for that episode
            score = 0
            state = env.reset()
            prev_x = None
            #saves model after every 10 episodes
            if episode > 1 and episode % 10 == 0:
                agent.save('pong.h5')