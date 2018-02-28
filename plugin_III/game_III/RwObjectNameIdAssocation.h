/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#pragma pack(push, 4)
struct RwObjectNameIdAssocation {
    char *m_pName;
    unsigned int m_dwHierarchyId;
    unsigned int m_dwFlags;
};
#pragma pack(pop)

VALIDATE_SIZE(RwObjectNameIdAssocation, 0xC);