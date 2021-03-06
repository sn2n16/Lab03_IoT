/*!
* Copyright 2016-2017 NXP
*
* \file
*
* This is the header file for the main application.
*
* Redistribution and use in source and binary forms, with or without modification,
* are permitted provided that the following conditions are met:
*
* o Redistributions of source code must retain the above copyright notice, this list
*   of conditions and the following disclaimer.
*
* o Redistributions in binary form must reproduce the above copyright notice, this
*   list of conditions and the following disclaimer in the documentation and/or
*   other materials provided with the distribution.
*
* o Neither the name of Freescale Semiconductor, Inc. nor the names of its
*   contributors may be used to endorse or promote products derived from this
*   software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _APPL_MAIN_H_
#define _APPL_MAIN_H_


/*! *********************************************************************************
*************************************************************************************
* Include
*************************************************************************************
********************************************************************************** */
#include "EmbeddedTypes.h"
#include "fsl_os_abstraction.h"

/*! *********************************************************************************
*************************************************************************************
* Public type definitions
*************************************************************************************
********************************************************************************** */
/*application state machine states enumeration*/
typedef enum app_states_tag
{
    gAppStateInit_c = 0,
    gAppStateIdle_c,
    gAppStateSelectTest_c,
    gAppStateRunning_c,
    gAppStateMaxState_c
}app_states_t;

/*! *********************************************************************************
*************************************************************************************
* Public macros
*************************************************************************************
********************************************************************************** */
/*
 * These values should be modified by the application as necessary.
 * They are used by the idle task initialization code from ApplMain.c.
 */
/*! Idle Task Stack Size */
#ifndef gAppIdleTaskStackSize_c
#define gAppIdleTaskStackSize_c (400)
#endif

/*! Idle Task OS Abstraction Priority */
#ifndef gAppIdleTaskPriority_c
#define gAppIdleTaskPriority_c  (8)
#endif

/*! Push Buttons States used in application. */
#define PB1_PRESSED     0x01
#define PB2_PRESSED     0x02
#define PB1_LONG_PRESS  0x03
#define PB2_LONG_PRESS  0x04
#define PB_INVALID      0xFF

#endif /* _APPL_MAIN_H_ */
