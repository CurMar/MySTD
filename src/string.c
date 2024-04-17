#include "string.h"

#include <stdlib.h>

void my_memcpy(void *dest, const void *src, size_t n)
{
    for (size_t i = 0; i < n; ++i)
        ((char *)dest)[i] = ((char *)src)[i];
}

void my_memmove(void *dest, const void *src, size_t n)
{
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
    while (n-- > 0)
        if (*s++ == c)
            return (void *)(s - 1);

    return NULL;
}

int my_memcmp(const char *s1, const char *s2, size_t n)
{
    for (size_t i = 0; i < n; ++i)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];

    return 0;
}

void my_memset(char *dest, char value, size_t n)
{
    while (n-- > 0)
        *dest++ = value;
}

void my_strcat(char *dest, const char *src)
{
    for (size_t i = my_strlen(dest) - 1; i < my_strlen(dest) + my_strlen(src); ++i)
        dest[i] = *src++;
}
void my_strncat(char *dest, const char *src, size_t n)
{
    dest += my_strlen(dest) - 1;
    while (n-- > 0)
        *dest++ = *src++;

    *dest = '\0';
}
size_t my_strlen(const char *str)
{
    size_t l = 0;
    while (str[l++])
        ;
    return l;
}