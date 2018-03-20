/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CDraw {
public:
    // static variables
    static float &ms_fFOV; // default 45.0
    static float &ms_fLODDistance;
    static float &ms_fFarClipZ;
    static float &ms_fNearClipZ;
    static unsigned char &FadeRed;
    static unsigned char &FadeGreen;
    static unsigned char &FadeBlue;
    static unsigned char &FadeValue;

    // static functions
    static void SetFOV(float fovValue);
};