#include "string.h"

#include <stdlib.h>

void my_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return;

    for (size_t i = 0; i < n; ++i)
        ((char *)dest)[i] = ((char *)src)[i];
}

void my_memmove(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return;

    char *buf = malloc(n);
    if (buf)
        my_memcpy(buf, src, n);
    else
        return;

    for (size_t i = 0; i < n; ++i)
        ((char *)dest)[i] = buf[i];

        free(buf);
}