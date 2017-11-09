#pragma once

#include "ap_version.h"

#define THISFIRMWARE "ArduHeli V3.5.4"
#define FIRMWARE_VERSION 3,5,4,FIRMWARE_VERSION_TYPE_BETA

#ifndef GIT_VERSION
#define FIRMWARE_STRING THISFIRMWARE
#else
#define FIRMWARE_STRING THISFIRMWARE " (" GIT_VERSION ")"
#endif
