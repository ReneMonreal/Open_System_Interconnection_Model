#include "Devices.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void D_init(Device* D){
    D->DeviceStatus = false;
    D->IPv4_Address = NULL;
};

void D_DeviceSetup(Device*D, bool DeviceStatus, const char*IPv4_Address){
    if (!D) return;

    D->DeviceStatus = DeviceStatus;
    free(D->IPv4_Address);
    D->IPv4_Address = NULL; 

    if (IPv4_Address){
        D-> IPv4_Address = malloc(strlen(IPv4_Address));
        if (D-> IPv4_Address) {
            strcpy(D->IPv4_Address, IPv4_Address);
        }
    }

    return; 
};


bool D_StatusCheck(Device* D){
    if (D == NULL ) return false;
    return D->DeviceStatus;
};

//Note: IPV4 is a pointer to said D->IPV4 Struct, thus it must be comapared to null
const char* D_GetIP(Device*D){
    const char* IPv4 = D->IPv4_Address;
    if (IPv4 == NULL){
        printf("IP Address is not found");
    } 
    return IPv4;
};

void D_PrintDevice(Device*D){
    if (D==NULL) return;
    printf("Device IP Address: %s --- Device Availability: %s\n",
        D->IPv4_Address ? D->IPv4_Address : "(none)",
        D->DeviceStatus ? "Online" : "Offline");
    return;
};

void D_Free(Device*D){
    free(D->IPv4_Address);
    D->DeviceStatus = false;
    D->IPv4_Address = NULL;
}

//Deconstructor
void D_Free(Device*D);



