
#include <stdio.h>
#include "utils.h"
#include "aes.h"
#include "Devices.h"
#include "string.h"


// OSI Modeling SImulation



static void print_hex(const uint8_t *buf, size_t len){
    for(size_t i = 0; i < len; i++){
        printf("%02x ", buf[i]);
        printf(" ");
    }
}





//Data Segmentation & Subnetting
//Layer 4 Encapsulation
//Layer 4 Decapsulation


//Addressing & Data Packeting
//Layer 3 Encapsulation
//Layer 3 Decapsulation

//Data Frames
//Layer 2 Encapsulation
//Layer 2 Decapsulation

//Bit Transportation (Bianary for this case)
//Layer 1 Encapsulsation
//Layer 1 Decapsulsation



int main(void) {

    //test devices     
    Device Device1;
    D_init(&Device1);
    bool DeviceStatus1 = true;
    char Ip1[16] = "192.242.424.23";
    D_DeviceSetup(&Device1, DeviceStatus1, Ip1);
    Device Device2;
    D_init(&Device2);
    bool DeviceStatus2 = true;
    char Ip2[16] = "192.232.234.94";
    D_DeviceSetup(&Device2, DeviceStatus2, Ip2);
    Device Device3;
    D_init(&Device3);
    bool DeviceStatus3 = false;
    char Ip3[16] = "192.245.374.236";
    D_DeviceSetup(&Device3, DeviceStatus3, Ip3);
    //An Arry containg all devices
    Device deviceArr[3] = {Device1, Device2, Device3};
    int NumOfDevices = (int)(sizeof(deviceArr) / sizeof(deviceArr[0]));

    printf("--------------------------------\n");
    printf("\n\nList of Devices\n");
    D_PrintDevice(&Device1);
    D_PrintDevice(&Device2);
    D_PrintDevice(&Device3);


    

//Retrieve & Manipulate Data
//Layer 7 Encapsulation
//Data is stored dynamically in the TextBuffer struct, retrived & store temporarily within the tb_loadfile function of the struct 
//tb_free to clear the dynamically allocated memory     
    TextBuffer tb;
    tb_init(&tb);

    printf("\n\n----------   Layer 7 Encapsulation   ----------");
    if (tb_load_file(&tb, "input.txt") != 1) {
        printf("Failed Loading File");
        return 0;
    }
    printf("\nYour Data (input.txt):\n");



    tb_PrintData(&tb);
    printf("\n^^^^^^^^^");
    bool IPVerify = false;
    bool StatusVerify = false;
    //device validation
    do{
        IPVerify = false;
        StatusVerify = false;
        char ReciverAddress[16];
        printf("\nWhat Device are you looking to sent this to?: ");
        scanf("%15s", ReciverAddress);
        for (int i = 0; i < NumOfDevices; i++ ){
            const char *ip = D_GetIP(&deviceArr[i]);
            if (ip && strcmp(ip, ReciverAddress) == 0){
                IPVerify = true;
                if(D_StatusCheck(&deviceArr[i]) == true){
                    printf("\nDevice is online!");
                    StatusVerify = true;
                }
                else{
                    printf("\nDevice is offline, please select another device.");
                }
                break;
            }
        }
        if(!IPVerify){
            printf("\nPlease Try Again...");
        }

    } while (!(IPVerify && StatusVerify));
    


 



//Cryptography and Data compression
//Layer 6 Encapsulation
//for simplication AES was used to encrypt, git repo https://github.com/kokke/tiny-AES-c
    //CTR was used works with any length no padding needed
    //sizing
    printf("\n\n----------   Layer 6 Encapsulation   ----------");

    uint8_t key[16] = {
        0x00,0x01,0x02,0x03, 0x04,0x05,0x06,0x07,
        0x08,0x09,0x0A,0x0B, 0x0C,0x0D,0x0E,0x0F
    };

    uint8_t iv[16] = {
        0x10,0x11,0x12,0x13, 0x14,0x15,0x16,0x17,
        0x18,0x19,0x1A,0x1B, 0x1C,0x1D,0x1E,0x1F
    };
    //actual encrption using aes.h
    struct AES_ctx ctx;
    AES_init_ctx_iv(&ctx, key, iv);
    AES_CTR_xcrypt_buffer(&ctx, (uint8_t*)tb.data, tb.len);
    printf("\nEncrpted  (hex preview):\n");
    print_hex((uint8_t*)tb.data, tb.len);
    //(uint8_t)tb.data stores encrpted data now, 


    //Syncrhonization & Resynchronization
    //Layer 5 Encapsulation
    printf("\n\n----------   Layer 5 Encapsulation   ----------");
    






    

    //clearing memory
    D_Free(&Device1);
    D_Free(&Device2);
    D_Free(&Device3);
    tb_free(&tb);
    return 0;
}
