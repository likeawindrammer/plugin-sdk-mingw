/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eTasks : int32_t {
    TASK_STAND_STILL = 1,
    TASK_SAY = 2,
    TASK_JUMP = 3,
    TASK_TIRED = 4,
    TASK_DIE = 5,
    TASK_AIM_GUN = 6,
    TASK_HANDS_UP = 7,
    TASK_GET_IN_VEHICLE = 12,
    TASK_EXIT_VEHICLE = 13,
    TASK_DRIVE_TO_POINT = 15,
    TASK_CAR_DRIVE_WANDER = 16,
    TASK_CONTROL_MOVEMENT = 19,
    TASK_GO_TO_CHAR = 21,
    TASK_SMART_FLEE_POINT = 24,
    TASK_SMART_FLEE_CHAR = 25,
    TASK_WANDER_STANDARD = 26,
    TASK_PERFORM_SEQUENCE = 29,
    TASK_GUN = 32,
    TASK_GO_TO_POINT_WHILE_SHOOTING = 33,
    TASK_TURN_TO_FACE_ENTITY = 34,
    TASK_COMPLEX_GUN = 35,
    TASK_AIM_AND_THROW_PROJECTILE = 36,
    TASK_DESTROY_CAR = 37,
    TASK_SIT_DOWN = 44,
    TASK_TURN_TO_FACE_COORD = 45,
    TASK_DRIVE_POINT_ROUTE = 46,
    TASK_CAR_DRIVE_A_MISSION = 49,
    TASK_GANG_DRIVE_BY = 52,
    TASK_USE_MOBILE_PHONE = 53,
    TASK_SET_PED_IN_VEHICLE = 54,
    TASK_SET_PED_IN_VEHICLE_2 = 55,
    TASK_SHOOT_AT_CHAR = 57,
    TASK_FLEE_ANY_MEANS = 58,
    TASK_DEAD = 59,
    TASK_CLIMB = 61,
    TASK_PERFORM_SEQUENCE_FROM_PROGRESS = 62,
    TASK_DECISION_MAKER = 65,
    TASK_CONTROL_MOVEMENT_2 = 69,
    TASK_FOLLOW_PATROL_ROUTE = 72,
    TASK_IGNORE_WEAPON_RANGE_FLAG = 78,
    TASK_ARREST_PED = 90,
    TASK_COMBAT = 91,
    TASK_LEAVE_CAR_DONT_CLOSE_DOOR = 97,
    TASK_DUCK_TOGGLE = 98,
    TASK_STAND_GUARD_DEFENSIVE_AREA = 100,
    TASK_STAND_GUARD = 107,
    TASK_CLIMB_LADDER = 108,
    TASK_STATIONARY_SCENARIO = 114,
    TASK_PERFORM_SEQUENCE_LOCALLY = 120,    
    TASK_MOBILE_CONVERSATION = 126,
    TASK_SWAP_WEAPON = 127,
    TASK_PUT_DOWN_OBJECT = 128,
    TASK_SHIMMYING = 211,
    TASK_SIT_IN_IDLE = 221,
    TASK_CLIMBING = 254,
    TASK_PUT_ON_HELMET = 325,
    TASK_PLAYER_IN_COVER = 1046,
    TASK_DRIVE_BY = 1049,
    TASK_DUCK = 1040,
    TASK_FIRE_GUN = 1042,
    TASK_BE_ARRESTED = 1108,
    TASK_LOOK_AT = 1205,
    TASK_SWIMMING = 1304,
    TASK_DUCK_WITH_GUN = 1900,
    TASK_RETREATING = 1904
};
