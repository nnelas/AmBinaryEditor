#include "CopyUtils.h"

int CopyUint32(BUFF *buf, uint32_t value) {
    char p[4];
    while (4 >= buf->size - buf->cur) {
        buf->size += 32 * 1024;
        buf->data = (char *) realloc(buf->data, buf->size);
        memset(buf->data + buf->cur, 0, buf->size - buf->cur);
        if (buf->data == NULL) {
            fprintf(stderr, "Error: realloc buffer.\n");
            return -1;
        }
    }

    p[0] = value & 0xff;
    p[1] = (value >> 8) & 0xff;
    p[2] = (value >> 16) & 0xff;
    p[3] = (value >> 24) & 0xff;
    memcpy(buf->data + buf->cur, p, 4);
    buf->cur += 4;

    return 0;
}

int CopyDataToBuf(BUFF *buf, unsigned char *from, size_t size) {
    while (size >= buf->size - buf->cur) {
        buf->size += 32 * 1024;
        buf->data = (char *) realloc(buf->data, buf->size);
        memset(buf->data + buf->cur, 0, buf->size - buf->cur);
        if (buf->data == NULL) {
            fprintf(stderr, "Error: realloc buffer.\n");
            return -1;
        }
    }
    memcpy(buf->data + buf->cur, from, size);
    buf->cur += size;
    return 0;
}