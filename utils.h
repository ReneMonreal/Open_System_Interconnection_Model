//Github imported
//.h exists -> .c how it works

#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>

//Retrieve & Manipulate Data
//Layer 7 Encapsulation
//Layer 7 Decapsulation

//Hold file contents
typedef struct {
    char *data; //dynamically alocate text within struct
    size_t len;

} TextBuffer;
//TextBuffer "name" allows for "name" to be called in utils.c

void tb_init(TextBuffer *tb);

//reset & free memory
void tb_free(TextBuffer *tb);

//load file into struct 
int tb_load_file(TextBuffer *tb, const char *filename);

void tb_PrintData(TextBuffer *tb);


#endif