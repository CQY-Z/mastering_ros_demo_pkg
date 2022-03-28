// Auto-generated. Do not edit!

// (in-package mastering_ros_demo_pkg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class demo_actionResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.final_count = null;
    }
    else {
      if (initObj.hasOwnProperty('final_count')) {
        this.final_count = initObj.final_count
      }
      else {
        this.final_count = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type demo_actionResult
    // Serialize message field [final_count]
    bufferOffset = _serializer.int32(obj.final_count, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type demo_actionResult
    let len;
    let data = new demo_actionResult(null);
    // Deserialize message field [final_count]
    data.final_count = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mastering_ros_demo_pkg/demo_actionResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'eaae876f57686d9f2a92f60bfbd26c85';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    int32 final_count
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new demo_actionResult(null);
    if (msg.final_count !== undefined) {
      resolved.final_count = msg.final_count;
    }
    else {
      resolved.final_count = 0
    }

    return resolved;
    }
};

module.exports = demo_actionResult;
