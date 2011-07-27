/* Automatically generated from /home/excelobs/Paparazzi/conf/messages.xml */
/* Please DO NOT EDIT */
/* Macros to send and receive messages of class datalink */
#define DL_ACINFO 1
#define DL_MOVE_WP 2
#define DL_WIND_INFO 3
#define DL_SETTING 4
#define DL_BLOCK 5
#define DL_HITL_UBX 6
#define DL_HITL_INFRARED 7
#define DL_PING 8
#define DL_FORMATION_SLOT 9
#define DL_FORMATION_STATUS 10
#define DL_JOYSTICK_RAW 11
#define DL_COMMANDS_RAW 12
#define DL_DGPS_RAW 13
#define DL_GET_SETTING 16
#define DL_TCAS_RESOLVE 17
#define DL_WINDTURBINE_STATUS 50
#define DL_RC_3CH 51
#define DL_RC_4CH 52
#define DL_KITE_COMMAND 96
#define DL_PAYLOAD_COMMAND 97
#define DL_SET_ACTUATOR 100
#define DL_CSC_SERVO_CMD 101
#define DL_BOOZ2_FMS_COMMAND 149
#define DL_BOOZ_NAV_STICK 150
#define DL_EXTERNAL_FILTER_SOLUTION 151
#define DL_MSG_datalink_NB 25

#define MSG_datalink_LENGTHS {0,(2+0+2+4+4+4+4+2+2+1),(2+0+1+1+4+4+4),(2+0+1+1+4+4+4),(2+0+1+1+4),(2+0+1+1),(2+0+1+1+1+1+nb_ubx_payload*1),(2+0+2+2+2+1),(2+0),(2+0+1+1+4+4+4),(2+0+1+1+1),(2+0+1+1+1+1),(2+0+1+1+nb_commands*1),(2+0+1+1+1+nb_rtcm*1),0,0,(2+0+1+1),(2+0+1+1+1),0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,(2+0+1+1+4+4),(2+0+1+1+1),(2+0+1+1+1+1+1+1),0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,(2+0+2+2),(2+0+1+1+nb_command*1),0,0,(2+0+2+1+1),(2+0+2+2+2+2),0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,(2+0+1+1+4+4+4+4+1),(2+0+1+1+1+1+1),(2+0+1+1+4+4+4+4),}

/*
 Size for non variable messages
23 : ACINFO
19 : BOOZ2_FMS_COMMAND
18 : EXTERNAL_FILTER_SOLUTION
14 : MOVE_WP
14 : WIND_INFO
14 : FORMATION_SLOT
10 : WINDTURBINE_STATUS
 8 : CSC_SERVO_CMD
 7 : HITL_INFRARED
 6 : SETTING
 6 : RC_4CH
 5 : BOOZ_NAV_STICK
 4 : JOYSTICK_RAW
 4 : KITE_COMMAND
 4 : SET_ACTUATOR
 3 : FORMATION_STATUS
 3 : TCAS_RESOLVE
 3 : RC_3CH
 2 : BLOCK
 2 : GET_SETTING
 0 : HITL_UBX
 0 : PING
 0 : COMMANDS_RAW
 0 : DGPS_RAW
 0 : PAYLOAD_COMMAND
*/
#define DOWNLINK_SEND_ACINFO(_chan, course, utm_east, utm_north, alt, itow, speed, climb, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+2+2+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+2+2+1)); \
	  DownlinkStartMessage(_chan, "ACINFO", DL_ACINFO, 0+2+4+4+4+4+2+2+1) \
	  DownlinkPutInt16ByAddr(_chan, (course)); \
	  DownlinkPutInt32ByAddr(_chan, (utm_east)); \
	  DownlinkPutInt32ByAddr(_chan, (utm_north)); \
	  DownlinkPutInt32ByAddr(_chan, (alt)); \
	  DownlinkPutUint32ByAddr(_chan, (itow)); \
	  DownlinkPutUint16ByAddr(_chan, (speed)); \
	  DownlinkPutInt16ByAddr(_chan, (climb)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MOVE_WP(_chan, wp_id, ac_id, lat, lon, alt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4)); \
	  DownlinkStartMessage(_chan, "MOVE_WP", DL_MOVE_WP, 0+1+1+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (wp_id)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutInt32ByAddr(_chan, (lat)); \
	  DownlinkPutInt32ByAddr(_chan, (lon)); \
	  DownlinkPutInt32ByAddr(_chan, (alt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WIND_INFO(_chan, ac_id, pad0, east, north, airspeed){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4)); \
	  DownlinkStartMessage(_chan, "WIND_INFO", DL_WIND_INFO, 0+1+1+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (pad0)); \
	  DownlinkPutFloatByAddr(_chan, (east)); \
	  DownlinkPutFloatByAddr(_chan, (north)); \
	  DownlinkPutFloatByAddr(_chan, (airspeed)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SETTING(_chan, index, ac_id, value){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4)); \
	  DownlinkStartMessage(_chan, "SETTING", DL_SETTING, 0+1+1+4) \
	  DownlinkPutUint8ByAddr(_chan, (index)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutFloatByAddr(_chan, (value)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BLOCK(_chan, block_id, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1)); \
	  DownlinkStartMessage(_chan, "BLOCK", DL_BLOCK, 0+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (block_id)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HITL_UBX(_chan, class, id, ac_id, nb_ubx_payload, ubx_payload){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+nb_ubx_payload*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+nb_ubx_payload*1)); \
	  DownlinkStartMessage(_chan, "HITL_UBX", DL_HITL_UBX, 0+1+1+1+1+nb_ubx_payload*1) \
	  DownlinkPutUint8ByAddr(_chan, (class)); \
	  DownlinkPutUint8ByAddr(_chan, (id)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8Array(_chan, nb_ubx_payload, ubx_payload); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HITL_INFRARED(_chan, roll, pitch, top, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+1)); \
	  DownlinkStartMessage(_chan, "HITL_INFRARED", DL_HITL_INFRARED, 0+2+2+2+1) \
	  DownlinkPutInt16ByAddr(_chan, (roll)); \
	  DownlinkPutInt16ByAddr(_chan, (pitch)); \
	  DownlinkPutInt16ByAddr(_chan, (top)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PING(_chan ){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0)); \
	  DownlinkStartMessage(_chan, "PING", DL_PING, 0) \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FORMATION_SLOT(_chan, ac_id, mode, slot_east, slot_north, slot_alt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4)); \
	  DownlinkStartMessage(_chan, "FORMATION_SLOT", DL_FORMATION_SLOT, 0+1+1+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkPutFloatByAddr(_chan, (slot_east)); \
	  DownlinkPutFloatByAddr(_chan, (slot_north)); \
	  DownlinkPutFloatByAddr(_chan, (slot_alt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FORMATION_STATUS(_chan, ac_id, leader_id, status){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1)); \
	  DownlinkStartMessage(_chan, "FORMATION_STATUS", DL_FORMATION_STATUS, 0+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (leader_id)); \
	  DownlinkPutUint8ByAddr(_chan, (status)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_JOYSTICK_RAW(_chan, ac_id, roll, pitch, throttle){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1)); \
	  DownlinkStartMessage(_chan, "JOYSTICK_RAW", DL_JOYSTICK_RAW, 0+1+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutInt8ByAddr(_chan, (roll)); \
	  DownlinkPutInt8ByAddr(_chan, (pitch)); \
	  DownlinkPutInt8ByAddr(_chan, (throttle)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_COMMANDS_RAW(_chan, ac_id, nb_commands, commands){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_commands*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_commands*1)); \
	  DownlinkStartMessage(_chan, "COMMANDS_RAW", DL_COMMANDS_RAW, 0+1+1+nb_commands*1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutInt8Array(_chan, nb_commands, commands); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DGPS_RAW(_chan, ac_id, length, nb_rtcm, rtcm){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+nb_rtcm*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+nb_rtcm*1)); \
	  DownlinkStartMessage(_chan, "DGPS_RAW", DL_DGPS_RAW, 0+1+1+1+nb_rtcm*1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (length)); \
	  DownlinkPutUint8Array(_chan, nb_rtcm, rtcm); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GET_SETTING(_chan, index, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1)); \
	  DownlinkStartMessage(_chan, "GET_SETTING", DL_GET_SETTING, 0+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (index)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TCAS_RESOLVE(_chan, ac_id, ac_id_conflict, resolve){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1)); \
	  DownlinkStartMessage(_chan, "TCAS_RESOLVE", DL_TCAS_RESOLVE, 0+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id_conflict)); \
	  DownlinkPutUint8ByAddr(_chan, (resolve)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WINDTURBINE_STATUS(_chan, ac_id, tb_id, sync_itow, cycle_time){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4)); \
	  DownlinkStartMessage(_chan, "WINDTURBINE_STATUS", DL_WINDTURBINE_STATUS, 0+1+1+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (tb_id)); \
	  DownlinkPutUint32ByAddr(_chan, (sync_itow)); \
	  DownlinkPutUint32ByAddr(_chan, (cycle_time)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RC_3CH(_chan, throttle_mode, roll, pitch){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1)); \
	  DownlinkStartMessage(_chan, "RC_3CH", DL_RC_3CH, 0+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (throttle_mode)); \
	  DownlinkPutInt8ByAddr(_chan, (roll)); \
	  DownlinkPutInt8ByAddr(_chan, (pitch)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RC_4CH(_chan, ac_id, mode, throttle, roll, pitch, yaw){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1+1)); \
	  DownlinkStartMessage(_chan, "RC_4CH", DL_RC_4CH, 0+1+1+1+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkPutUint8ByAddr(_chan, (throttle)); \
	  DownlinkPutInt8ByAddr(_chan, (roll)); \
	  DownlinkPutInt8ByAddr(_chan, (pitch)); \
	  DownlinkPutInt8ByAddr(_chan, (yaw)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_KITE_COMMAND(_chan, POWER, TURN){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2)); \
	  DownlinkStartMessage(_chan, "KITE_COMMAND", DL_KITE_COMMAND, 0+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (POWER)); \
	  DownlinkPutUint16ByAddr(_chan, (TURN)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PAYLOAD_COMMAND(_chan, ac_id, nb_command, command){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_command*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_command*1)); \
	  DownlinkStartMessage(_chan, "PAYLOAD_COMMAND", DL_PAYLOAD_COMMAND, 0+1+1+nb_command*1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8Array(_chan, nb_command, command); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SET_ACTUATOR(_chan, value, no, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+1+1)); \
	  DownlinkStartMessage(_chan, "SET_ACTUATOR", DL_SET_ACTUATOR, 0+2+1+1) \
	  DownlinkPutUint16ByAddr(_chan, (value)); \
	  DownlinkPutUint8ByAddr(_chan, (no)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CSC_SERVO_CMD(_chan, servo_1, servo_2, servo_3, servo_4){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2)); \
	  DownlinkStartMessage(_chan, "CSC_SERVO_CMD", DL_CSC_SERVO_CMD, 0+2+2+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (servo_1)); \
	  DownlinkPutUint16ByAddr(_chan, (servo_2)); \
	  DownlinkPutUint16ByAddr(_chan, (servo_3)); \
	  DownlinkPutUint16ByAddr(_chan, (servo_4)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_FMS_COMMAND(_chan, h_mode, v_mode, v_sp, h_sp_1, h_sp_2, h_sp_3, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4+4+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4+4+1)); \
	  DownlinkStartMessage(_chan, "BOOZ2_FMS_COMMAND", DL_BOOZ2_FMS_COMMAND, 0+1+1+4+4+4+4+1) \
	  DownlinkPutUint8ByAddr(_chan, (h_mode)); \
	  DownlinkPutUint8ByAddr(_chan, (v_mode)); \
	  DownlinkPutInt32ByAddr(_chan, (v_sp)); \
	  DownlinkPutInt32ByAddr(_chan, (h_sp_1)); \
	  DownlinkPutInt32ByAddr(_chan, (h_sp_2)); \
	  DownlinkPutInt32ByAddr(_chan, (h_sp_3)); \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_NAV_STICK(_chan, ac_id, vx_sp, vy_sp, vz_sp, r_sp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1)); \
	  DownlinkStartMessage(_chan, "BOOZ_NAV_STICK", DL_BOOZ_NAV_STICK, 0+1+1+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutInt8ByAddr(_chan, (vx_sp)); \
	  DownlinkPutInt8ByAddr(_chan, (vy_sp)); \
	  DownlinkPutInt8ByAddr(_chan, (vz_sp)); \
	  DownlinkPutInt8ByAddr(_chan, (r_sp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_EXTERNAL_FILTER_SOLUTION(_chan, ac_id, status, x, xd, y, yd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "EXTERNAL_FILTER_SOLUTION", DL_EXTERNAL_FILTER_SOLUTION, 0+1+1+4+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (status)); \
	  DownlinkPutFloatByAddr(_chan, (x)); \
	  DownlinkPutFloatByAddr(_chan, (xd)); \
	  DownlinkPutFloatByAddr(_chan, (y)); \
	  DownlinkPutFloatByAddr(_chan, (yd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}


#define DL_ACINFO_course(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_ACINFO_utm_east(_payload) ((int32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24))
#define DL_ACINFO_utm_north(_payload) ((int32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_ACINFO_alt(_payload) ((int32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24))
#define DL_ACINFO_itow(_payload) ((uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24))
#define DL_ACINFO_speed(_payload) ((uint16_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8))
#define DL_ACINFO_climb(_payload) ((int16_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8))
#define DL_ACINFO_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+24)))

#define DL_MOVE_WP_wp_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_MOVE_WP_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_MOVE_WP_lat(_payload) ((int32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24))
#define DL_MOVE_WP_lon(_payload) ((int32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_MOVE_WP_alt(_payload) ((int32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24))

#define DL_WIND_INFO_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_WIND_INFO_pad0(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_WIND_INFO_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_WIND_INFO_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_WIND_INFO_airspeed(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))

#define DL_SETTING_index(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_SETTING_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_SETTING_value(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))

#define DL_BLOCK_block_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_BLOCK_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))

#define DL_HITL_UBX_class(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_HITL_UBX_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_HITL_UBX_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_HITL_UBX_ubx_payload_length(_payload) ((uint8_t)(*((uint8_t*)_payload+5)))
#define DL_HITL_UBX_ubx_payload(_payload) ((uint8_t*)(_payload+6))

#define DL_HITL_INFRARED_roll(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_HITL_INFRARED_pitch(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_HITL_INFRARED_top(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_HITL_INFRARED_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+8)))


#define DL_FORMATION_SLOT_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_FORMATION_SLOT_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_FORMATION_SLOT_slot_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_FORMATION_SLOT_slot_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_FORMATION_SLOT_slot_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))

#define DL_FORMATION_STATUS_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_FORMATION_STATUS_leader_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_FORMATION_STATUS_status(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))

#define DL_JOYSTICK_RAW_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_JOYSTICK_RAW_roll(_payload) ((int8_t)(*((uint8_t*)_payload+3)))
#define DL_JOYSTICK_RAW_pitch(_payload) ((int8_t)(*((uint8_t*)_payload+4)))
#define DL_JOYSTICK_RAW_throttle(_payload) ((int8_t)(*((uint8_t*)_payload+5)))

#define DL_COMMANDS_RAW_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_COMMANDS_RAW_commands_length(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_COMMANDS_RAW_commands(_payload) ((int8_t*)(_payload+4))

#define DL_DGPS_RAW_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_DGPS_RAW_length(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_DGPS_RAW_rtcm_length(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_DGPS_RAW_rtcm(_payload) ((uint8_t*)(_payload+5))

#define DL_GET_SETTING_index(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_GET_SETTING_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))

#define DL_TCAS_RESOLVE_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_TCAS_RESOLVE_ac_id_conflict(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_TCAS_RESOLVE_resolve(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))

#define DL_WINDTURBINE_STATUS_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_WINDTURBINE_STATUS_tb_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_WINDTURBINE_STATUS_sync_itow(_payload) ((uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24))
#define DL_WINDTURBINE_STATUS_cycle_time(_payload) ((uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))

#define DL_RC_3CH_throttle_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_RC_3CH_roll(_payload) ((int8_t)(*((uint8_t*)_payload+3)))
#define DL_RC_3CH_pitch(_payload) ((int8_t)(*((uint8_t*)_payload+4)))

#define DL_RC_4CH_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_RC_4CH_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_RC_4CH_throttle(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_RC_4CH_roll(_payload) ((int8_t)(*((uint8_t*)_payload+5)))
#define DL_RC_4CH_pitch(_payload) ((int8_t)(*((uint8_t*)_payload+6)))
#define DL_RC_4CH_yaw(_payload) ((int8_t)(*((uint8_t*)_payload+7)))

#define DL_KITE_COMMAND_POWER(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_KITE_COMMAND_TURN(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))

#define DL_PAYLOAD_COMMAND_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_PAYLOAD_COMMAND_command_length(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_PAYLOAD_COMMAND_command(_payload) ((uint8_t*)(_payload+4))

#define DL_SET_ACTUATOR_value(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_SET_ACTUATOR_no(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_SET_ACTUATOR_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+5)))

#define DL_CSC_SERVO_CMD_servo_1(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_CSC_SERVO_CMD_servo_2(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_CSC_SERVO_CMD_servo_3(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_CSC_SERVO_CMD_servo_4(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))

#define DL_BOOZ2_FMS_COMMAND_h_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_BOOZ2_FMS_COMMAND_v_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_BOOZ2_FMS_COMMAND_v_sp(_payload) ((int32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24))
#define DL_BOOZ2_FMS_COMMAND_h_sp_1(_payload) ((int32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_BOOZ2_FMS_COMMAND_h_sp_2(_payload) ((int32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24))
#define DL_BOOZ2_FMS_COMMAND_h_sp_3(_payload) ((int32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24))
#define DL_BOOZ2_FMS_COMMAND_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+20)))

#define DL_BOOZ_NAV_STICK_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_BOOZ_NAV_STICK_vx_sp(_payload) ((int8_t)(*((uint8_t*)_payload+3)))
#define DL_BOOZ_NAV_STICK_vy_sp(_payload) ((int8_t)(*((uint8_t*)_payload+4)))
#define DL_BOOZ_NAV_STICK_vz_sp(_payload) ((int8_t)(*((uint8_t*)_payload+5)))
#define DL_BOOZ_NAV_STICK_r_sp(_payload) ((int8_t)(*((uint8_t*)_payload+6)))

#define DL_EXTERNAL_FILTER_SOLUTION_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_EXTERNAL_FILTER_SOLUTION_status(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_EXTERNAL_FILTER_SOLUTION_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_EXTERNAL_FILTER_SOLUTION_xd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_EXTERNAL_FILTER_SOLUTION_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))
#define DL_EXTERNAL_FILTER_SOLUTION_yd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24); _f.f; }))
