/* This file has been generated from /home/excelobs/paparazzi/conf/airframes/KMUAV_XBee_Airspeed.xml */
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
#include "sensors/airspeed_ets.h"


#ifdef MODULES_C

static inline void modules_init(void) {
  airspeed_ets_init();
}

static inline void modules_periodic_task(void) {
  static uint8_t i6; i6++; if (i6>=6) i6=0;


  if (i6 == 0) {
    airspeed_ets_read_periodic();
  }
}

static inline void modules_event_task(void) {
  AirspeedEtsEvent();
}

#endif // MODULES_C

#ifdef MODULES_DATALINK_C

#include "messages.h"
#include "generated/airframe.h"
static inline void modules_parse_datalink(uint8_t msg_id __attribute__ ((unused))) {
}

#endif // MODULES_DATALINK_C

#endif // MODULES_H
