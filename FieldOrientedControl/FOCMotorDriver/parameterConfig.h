/**
 * @file parameterConfig.h
 * @brief FOC configuration file
 * @author Henning Reetz
 * @copyright
 * MIT License
 *
 * Copyright (c) 2021	Henning Reetz
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef parameterConfig_h
#define parameterConfig_h

/*--- INCLUDES ---*/

/*--- DEFINES ---*/
/* MOTOR */
#define PAR_D_INDUCTANCE 0
#define PAR_Q_INDUCTANCE 0
#define PAR_PHASE_RESISTANCE 0
#define PAR_POLEPAIRS 0

/* GENERAL */
#define PAR_PWM_FREQUENCY 0
#define PAR_FOC_CALL_INTERVALL 0
#define PAR_MAX_SPEED 0
#define PAR_MIN_SPEED 0
#define PAR_STARTUP_TIME 0
#define PAR_MAX_IQ 0
#define PAR_MAX_ID 0
#define PAR_ALIGNMENT_IQ 0
#define PAR_ALIGNMENT_ID 0
#define PAR_ALIGNMENT_TIME 0

/* PWM */
#define PAR_DEADTIME 0

/* PI */
#define PAR_SPEED_KP 0
#define PAR_SPEED_KI 0
#define PAR_IQ_KP 0
#define PAR_IQ_KI 0
#define PAR_ID_KP 0
#define PAR_ID_KI 0

/* MEASURMENT */
#define PAR_SHUNT_RESISTANCE 0

/*--- TYPEDEFS ---*/

/*--- FUNCTION PROTOTYPES ---*/

#endif
