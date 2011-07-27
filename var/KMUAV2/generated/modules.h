/* This file has been generated from /home/excelobs/paparazzi/conf/airframes/mm/fixed-wing/fw_ins_arduimu.xml */
/* Please DO NOT EDIT */

#ifndef MODULES_H
#define MODULES_H 

#define MODULES_IDLE  0
#define MODULES_RUN   1
#define MODULES_START 2
#define MODULES_STOP  3

#ifdef MODULES_C
#define EXTERN_MODULES
#else
#define EXTERN_MODULES extern
#endif
#include "std.h"
#include "ins/ins_arduimu.h"

EXTERN_MODULES uint8_t ins_ArduIMU_ArduIMU_periodic_status;
EXTERN_MODULES uint8_t ins_ArduIMU_ArduIMU_periodicGPS_status;

#ifdef MODULES_C

static inline void modules_init(void) {
  ArduIMU_init();
  ins_ArduIMU_ArduIMU_periodic_status = TRUE;
  ins_ArduIMU_ArduIMU_periodicGPS_status = TRUE;
}

static inline void modules_periodic_task(void) {
  static uint8_t i4; i4++; if (i4>=4) i4=0;
  static uint8_t i7; i7++; if (i7>=7) i7=0;

  if (ins_ArduIMU_ArduIMU_periodic_status == MODULES_START) { ; ins_ArduIMU_ArduIMU_periodic_status = MODULES_RUN; }
  if (ins_ArduIMU_ArduIMU_periodic_status == MODULES_STOP) { ; ins_ArduIMU_ArduIMU_periodic_status = MODULES_IDLE; }
  if (ins_ArduIMU_ArduIMU_periodicGPS_status == MODULES_START) { ; ins_ArduIMU_ArduIMU_periodicGPS_status = MODULES_RUN; }
  if (ins_ArduIMU_ArduIMU_periodicGPS_status == MODULES_STOP) { ; ins_ArduIMU_ArduIMU_periodicGPS_status = MODULES_IDLE; }

  if (i4 == 0 && ins_ArduIMU_ArduIMU_periodic_status == MODULES_RUN) {
    ArduIMU_periodic();
  }
  if (i7 == 2 && ins_ArduIMU_ArduIMU_periodicGPS_status == MODULES_RUN) {
    ArduIMU_periodicGPS();
  }
}

static inline void modules_event_task(void) {
}

#endif // MODULES_C

#ifdef MODULES_DATALINK_C

#include "messages.h"
#include "generated/airframe.h"
static inline void modules_parse_datalink(uint8_t msg_id __attribute__ ((unused))) {
}

#endif // MODULES_DATALINK_C

#endif // MODULES_H
