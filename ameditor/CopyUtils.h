#ifndef INCLUDE_COPYUTILS_H
#define INCLUDE_COPYUTILS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#endif

typedef struct _BUFF {
    char *data;
    size_t size;
    size_t cur;
} BUFF;

int CopyUint32(BUFF *buf, uint32_t value);

int CopyDataToBuf(BUFF *buf, unsigned char *from, size_t size);