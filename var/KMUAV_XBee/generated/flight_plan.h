/* This file has been generated from /home/excelobs/paparazzi/conf/flight_plans/KMUAV_FP.xml */
/* Please DO NOT EDIT */

#ifndef FLIGHT_PLAN_H
#define FLIGHT_PLAN_H 

#include "std.h"
#include "generated/modules.h"
#include "subsystems/navigation/nav_line.h"
#include "datalink.h"
#define FLIGHT_PLAN_NAME "Frieding_Test"
#define NAV_UTM_EAST0 665460
#define NAV_UTM_NORTH0 5319949
#define NAV_UTM_ZONE0 32
#define NAV_LAT0 480113990 /* 1e7deg */
#define NAV_LON0 112186480 /* 1e7deg */
#define NAV_ALT0 65000 /* cm from msl */
#define NAV_HMSL0 4596 /* cm, msl from ellipsoid (EGM96) */
#define QFU 0.0
#define WP_dummy 0
#define WP_HOME 1
#define WP_STDBY 2
#define WP_PROFILE 3
#define WP_1 4
#define WP_2 5
#define WP_MOB 6
#define WP_S1 7
#define WP_S2 8
#define WP_CLIMB 9
#define WAYPOINTS { \
 {42.0, 42.0, 75},\
 {0.0, 0.0, 75},\
 {49.5, 80.1, 75},\
 {80.0, 100.1, 75},\
 {10.1, 189.9, 75},\
 {132.3, 139.1, 75},\
 {137.0, -11.6, 75},\
 {-119.2, 69.6, 75},\
 {274.4, 289.5, 75},\
 {-114.5, 162.3, 75},\
};
#define WAYPOINTS_LLA { \
 {480117657, 112192269, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480113989, 112186479, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480121063, 112193421, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480122782, 112197585, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480131036, 112188566, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480126153, 112204743, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480112592, 112204791, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480120555, 112170777, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480139306, 112224364, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
 {480128877, 112171764, 7500}, /* 1e7deg, 1e7deg, cm (hmsl=45.96m) */ \
};
#define NB_WAYPOINT 10
#define NB_BLOCK 12
#define GROUND_ALT 650.
#define GROUND_ALT_CM 65000
#define SECURITY_HEIGHT 25.
#define SECURITY_ALT 675.
#define MAX_DIST_FROM_HOME 4500.
#ifdef NAV_C

static inline void auto_nav(void) {
  if ((nav_block != 4) && (estimator_z>3600)) { GotoBlock(4); return; }
  if ((nav_block != 4) && (datalink_time>30)) { GotoBlock(4); return; }
  if ((nav_block != 4) && (10>PowerVoltage())) { GotoBlock(4); return; }
  switch (nav_block) {
    Block(0) // Wait GPS
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        kill_throttle = 1;
        NextStageAndBreak();
        break;
      Label(while_1)
      Stage(1)
        if (! (!(GpsFixValid()))) Goto(endwhile_2) else NextStageAndBreak();
        Stage(2)
          Goto(while_1)
        Label(endwhile_2)
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(1) // Geo init
    ; // pre_call
    switch(nav_stage) {
      Label(while_3)
      Stage(0)
        if (! (LessThan(NavBlockTime(),10))) Goto(endwhile_4) else NextStageAndBreak();
        Stage(1)
          Goto(while_3)
        Label(endwhile_4)
      Stage(2)
        if (! (NavSetGroundReferenceHere()))
          NextStageAndBreak();
        break;
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(2) // Holding point
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        kill_throttle = 1;
        NextStageAndBreak();
        break;
      Stage(1)
        {
          NavAttitude(RadOfDeg(0));
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavVerticalThrottleMode(9600*(0));
        }
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(3) // Takeoff
    ; // pre_call
    if ((nav_block != 4) && (estimator_z>(ground_alt+25))) { GotoBlock(4); return; }
    switch(nav_stage) {
      Stage(0)
        kill_throttle = 0;
        NextStageAndBreak();
        break;
      Stage(1)
        estimator_flight_time = 0;
        NextStageAndBreak();
        break;
      Stage(2)
        if (NavApproachingFrom(9,1,CARROT)) NextStageAndBreakFrom(9) else {
          NavGotoWaypoint(9);
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavVerticalThrottleMode(9600*(1.000000));
        }
        break;
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(4) // Standby
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(2), 0.);
        NavCircleWaypoint(2, nav_radius);
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(5) // profile_up
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(3), 0.);
        NavCircleWaypoint(3, nav_radius);
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(6) // profile_down
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        NavVerticalAutoThrottleMode(RadOfDeg(RadOfDeg(-(10))));
        NavVerticalThrottleMode(9600*(0));
        NavCircleWaypoint(3, nav_radius);
        if (((ground_alt+150)>estimator_z)) NextStageAndBreak();
        break;
      Stage(1)
        GotoBlock(4);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(7) // MOB
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        if (! (NavSetWaypointHere(WP_MOB)))
          NextStageAndBreak();
        break;
      Stage(1)
        nav_radius = DEFAULT_CIRCLE_RADIUS;
        NextStageAndBreak();
        break;
      Stage(2)
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(6), 0.);
        NavCircleWaypoint(6, nav_radius);
        break;
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(8) // Line 1-2
    ; // pre_call
    if ((nav_block != 4) && (datalink_time>22)) { GotoBlock(4); return; }
    switch(nav_stage) {
      Stage(0)
        if (! (nav_line_init()))
          NextStageAndBreak();
        break;
      Stage(1)
        if (! (nav_line(WP_1, WP_2, nav_radius)))
          NextStageAndBreak();
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(9) // Survey S1-S2 NS
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        NavSurveyRectangleInit(7, 8, 150, NS);
        NextStageAndBreak();
      Stage(1)
        NavSurveyRectangle(7, 8);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(10) // Survey S1-S2 WE
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        NavSurveyRectangleInit(7, 8, 150, WE);
        NextStageAndBreak();
      Stage(1)
        NavSurveyRectangle(7, 8);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(11) // HOME
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        nav_home();
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    default: break;
  }
}
#endif // NAV_C

#endif // FLIGHT_PLAN_H
