// -*- mode: c; c-basic-offset: 2; indent-tabs-mode: nil; -*-
//
//
// This file is part of BeagleG. http://github.com/hzeller/beagleg
//
// BeagleG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// BeagleG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with BeagleG.  If not, see <http://www.gnu.org/licenses/>.
//
// see motor-interface-constants.h for available PINs

// OPTOCAPE


#define MOTOR_1_STEP_GPIO  PIN_P8_13  // X_STEP
#define MOTOR_2_STEP_GPIO  PIN_P8_15  // Y_STEP
#define MOTOR_3_STEP_GPIO  PIN_P8_19  // Z_STEP
#define MOTOR_4_STEP_GPIO  PIN_P9_16  // A_STEP


#define MOTOR_1_DIR_GPIO   PIN_P8_12  // X_DIR
#define MOTOR_2_DIR_GPIO   PIN_P8_14  // Y_DIR
#define MOTOR_3_DIR_GPIO   PIN_P8_26  // Z_DIR
#define MOTOR_4_DIR_GPIO   PIN_P9_18  // A_DIR


#define MOTOR_ENABLE_GPIO  PIN_P9_24  // AXIS_ENAn
#define MOTOR_ENABLE_IS_ACTIVE_HIGH 0  // 1 if EN, 0 if ~EN

//#define AUX_1_GPIO         PIN_P8_10  // OUT0 - GPIO
#define PWM_1_GPIO         PIN_P8_10 // OUT0 - TIMER PWM

#define AUX_2_GPIO         PIN_P9_23 //28V PSU

#define IN_1_GPIO          PIN_P8_17   // X-MIN
#define IN_2_GPIO          PIN_P9_12  // Y-MIN
#define IN_3_GPIO          PIN_P8_9  // Z-MIN
#define IN_4_GPIO          PIN_P8_18  // ESTOP IN

//#define IN_8_GPIO          PIN_P_  // PAUSE
//#define IN_9_GPIO          PIN_P_  // START
