#include "stdlib.h"

double my_atof(const char *s)
{
    double n = 0;
    char sgn = 1, d = 1;
    if (*s == '-' || *s == '+')
    {
        sgn = *s == '-' ? -1 : 1;
        ++s;
    }

    while (*s >= '0' && *s <= '9')
        n = n * 10 + (*s++ - '0');

    if (*s == '.' || *s == ',')
        ++s;

    while (*s >= '0' && *s <= '9')
    {
        n = n * 10 + (*s++ - '0');
        d *= 10;
    }
    return n * sgn / d;
}