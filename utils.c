#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Retrieve & Manipulate Data
//Layer 7 Encapsulation
//Layer 7 Decapsulation

//constructor
void tb_init(TextBuffer *tb){
    tb -> data = NULL;
    tb -> len = 0;
}
//deconstructor
void tb_free(TextBuffer *tb){
    free(tb-> data);
    tb-> data = NULL;
    tb -> len = 0;
}
//data is retrived & stored locally then stored dynamically within the struct pointer
int tb_load_file(TextBuffer *tb, const char *filename){
   printf("\nDownloading Data...");
    FILE *fptr = fopen("input.txt", "r"); //open file in read mode
    char *inputdata = NULL;
    if (fptr == NULL){
        printf("Input File Not Found...\n");
        return 0;
    }

    size_t length = 0;
    char buffer[250];
    //fgets(where to store file contents, Max size of data to read, file pointer)
    while (fgets(buffer, sizeof(buffer), fptr)){
        size_t buf_len = strlen(buffer); //return string len
        //extend buffer
        char *temp = realloc(inputdata, length + buf_len +1); //rellocate dynamic memory
        if (!temp){
            printf("Memory allocation failed...\n");
            free(inputdata); //delocate dynamic memory
            fclose(fptr); //close file
            return 1;

        }

        inputdata = temp;

        //memcpy(pointer to where the data is pasted, pointer from which the data is copied, num of byte copied)
        memcpy(inputdata + length, buffer, buf_len); //Copy data from on block of memory to another
        length += buf_len;
        inputdata[length] = '\0';
    }
    
    fclose(fptr);

    //data & length are stored locally (in the function)
    //Store in the struct
    tb-> data = inputdata;
    tb->len = length;

    return 1;

}

void tb_PrintData(TextBuffer *tb){
    if(tb-> data == NULL){
        printf("No Data to Print.\n");
        return;
    }
    printf("%s\n", tb-> data);
}

