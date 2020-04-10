// Auto-generated. Do not edit!

// (in-package assist_feeding.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class gripper_openRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.gripper_state = null;
    }
    else {
      if (initObj.hasOwnProperty('gripper_state')) {
        this.gripper_state = initObj.gripper_state
      }
      else {
        this.gripper_state = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type gripper_openRequest
    // Serialize message field [gripper_state]
    bufferOffset = _serializer.int32(obj.gripper_state, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type gripper_openRequest
    let len;
    let data = new gripper_openRequest(null);
    // Deserialize message field [gripper_state]
    data.gripper_state = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assist_feeding/gripper_openRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'db3ad4d90dfcecae67a49b86edd9c7af';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 gripper_state
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new gripper_openRequest(null);
    if (msg.gripper_state !== undefined) {
      resolved.gripper_state = msg.gripper_state;
    }
    else {
      resolved.gripper_state = 0
    }

    return resolved;
    }
};

class gripper_openResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.gripper_state = null;
    }
    else {
      if (initObj.hasOwnProperty('gripper_state')) {
        this.gripper_state = initObj.gripper_state
      }
      else {
        this.gripper_state = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type gripper_openResponse
    // Serialize message field [gripper_state]
    bufferOffset = _serializer.int32(obj.gripper_state, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type gripper_openResponse
    let len;
    let data = new gripper_openResponse(null);
    // Deserialize message field [gripper_state]
    data.gripper_state = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assist_feeding/gripper_openResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'db3ad4d90dfcecae67a49b86edd9c7af';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 gripper_state
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new gripper_openResponse(null);
    if (msg.gripper_state !== undefined) {
      resolved.gripper_state = msg.gripper_state;
    }
    else {
      resolved.gripper_state = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: gripper_openRequest,
  Response: gripper_openResponse,
  md5sum() { return '7626e2955bd6177e24f663e9b9a1fde1'; },
  datatype() { return 'assist_feeding/gripper_open'; }
};
