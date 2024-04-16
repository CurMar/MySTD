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

void *my_memchr(const char *s, char c, size_t n)
{
    if (!s || !n)
        return NULL;

    while (n-- > 0)
        if (*s++ == c)
            return (void *)(s - 1);

    return NULL;
}

int my_memcmp(const char *s1, const char *s2, size_t n)
{
    if (!s1 || !s2 || !n)
        return 0;

    for (size_t i = 0; i < n; ++i)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];

    return 0;
}

void my_memset(char *dest, char value, size_t n)
{
    if (!dest)
        return;

    while (n-- > 0)
        *dest++ = value;
}