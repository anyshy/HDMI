#ifndef GUIDS_HPP_INCLUDED
#define GUIDS_HPP_INCLUDED

#include <windows.h>

GUID devices[] = {
    {0x4D36E96E, 0xE325, 0x11CE, 0xBF, 0xC1, 0x08, 0x00, 0x2B, 0xE1, 0x03, 0x18},  //PlugNPlay Display
    {0xA5DCBF10, 0x6530, 0x11D2, 0x90, 0x1F, 0x00, 0xC0, 0x4F, 0xB9, 0x51, 0xED},  //GUID_DEVINTERFACE_USB_DEVICE
    {0x0850302A, 0xB344, 0x4FDA, 0x9B, 0xE9, 0x90, 0x57, 0x6B, 0x8D, 0x46, 0xF0},  //GUID_BTHPORT_DEVICE_INTERFACE
    {0xE6F07B5F, 0xEE97, 0x4a90, 0xB0, 0x76, 0x33, 0xF5, 0x7B, 0xF4, 0xEA, 0xA7},  //GUID_DEVINTERFACE_MONITOR
    {0x1CA05180, 0xA699, 0x450A, 0x9A, 0x0C, 0xDE, 0x4F, 0xBE, 0x3D, 0xDD, 0x89},  //GUID_DISPLAY_DEVICE_ARRIVAL
    {0x5B45201D, 0xF2F2, 0x4F3B, 0x85, 0xBB, 0x30, 0xFF, 0x1F, 0x95, 0x35, 0x99},  //GUID_DEVINTERFACE_DISPLAY_ADAPTER
    {0x1AD9E4F0, 0xF88D, 0x4360, 0xBA, 0xB9, 0x4C, 0x2D, 0x55, 0xE5, 0x64, 0xCD},  //GUID_DEVINTERFACE_VIDEO_OUTPUT_ARRIVAL
};

#endif // GUIDS_HPP_INCLUDED
