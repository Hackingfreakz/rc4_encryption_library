#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
#include<unistd.h>

#define rc4decrypt(x,y) rc4encrypt(x,y)
typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
struct arcfour{
    int8 i,j,k;
    int8 s[256];
};
typedef struct arcfour Arcfour;


Arcfour *rcinit(int8*,int16);
int8 rc4byte(void);
int8 *rc4encrypt(int8*,int16);
