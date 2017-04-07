/*
 * $FILE: xmcports.h
 *
 * XtratuM Communication Ports wrapper definitions
 *
 * $VERSION$
 *
 * Author: Jordi Sánchez, <jsanchez@ai2.upv.es>
 *
 * $LICENSE:
 * (c) Universidad Politecnica de Valencia. All rights reserved.
 *     Read LICENSE.txt file for the license.terms.
 */

#ifndef _XMPORTS_H_
#define _XMPORTS_H_

#include <xm.h>

struct XmCommPort {
    char name[32];
    xm_s32_t type;
    xm_s32_t direction;
    xm_s32_t maxMsgLen;
    xm_s32_t maxNoMsg;
};

struct XmPortConfig {
    xm_s32_t noPorts;
    xmAddress_t xmCommPortTabOffset;
};


#endif //_XMPORTS_H_
