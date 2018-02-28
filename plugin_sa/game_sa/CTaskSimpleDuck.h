/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleDuck : public CTaskSimple {
protected:
    CTaskSimpleDuck(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleDuck, 0x);