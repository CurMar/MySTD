#include "string.h"

void my_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return;

    for (size_t i = 0; i < n; ++i)
        ((char *)dest)[i] = ((char *)src)[i];
}