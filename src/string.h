#ifndef MYSTRING_H
#define MYSTRING_H
#include <stdio.h>
void my_memcpy(void *, const void *, size_t);
void my_memmove(void *, const void *, size_t);
void *my_memchr(const char *, char, size_t);
int my_memcmp(const char *, const char *, size_t);
void my_memset(char *, char, size_t);
void my_strcat(char *, const char *);
void my_strncat(char *, const char *, size_t n);
size_t my_strlen(const char *);
#endif