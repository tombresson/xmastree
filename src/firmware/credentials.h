/*****************************************************************************
 * @file    credentials.h
 * @brief   Source code .h file for credentials module
 * @date    2019-DEC-08
 *
 * @note <insert notes>
 *
 * @ingroup doxy_group
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019, Thomas Bresson
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
 *
*****************************************************************************/

#ifndef CREDENTIALS_H
#define CREDENTIALS_H

/**
 * @addtogroup doxy_group
 * @{
 */
/* ***************************    Includes     **************************** */

#include "application.h"

/* ***************************   Definitions   **************************** */

/* ****************************   Structures   **************************** */

typedef struct
{
    const char *ssid;
    const char *pw;
    const enum SecurityType sec_type;
}credentialData_t;

typedef struct
{
    const credentialData_t *cred_list;
    const int size;
}credList_t;

/* ***********************   Function Prototypes   ************************ */

credList_t credentialsGetList(void);

/** @} */

#endif /* CREDENTIALS_H */
