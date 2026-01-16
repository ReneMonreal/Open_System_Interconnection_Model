#ifndef DEVICES_H
#define DEVICES_H
#include <stdbool.h>

#include <stddef.h>

typedef struct{
    bool DeviceStatus;
    char *IPv4_Address; // 16 for xxx.xxx.xxx.xxx
} Device;
//constructor
void D_init(Device* D);
void D_DeviceSetup(Device* D, bool DeviceStatus, const char*IPv4_Address);

bool D_StatusCheck(Device* D);

const char* D_GetIP(Device*D);

void D_PrintDevice(Device*D);



//Deconstructor
void D_Free(Device*D);


#endif