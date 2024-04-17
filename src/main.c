#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string.h"

int main(int argc, char *argv[])
{
    printf("===HELLO===\n");
    char s1[16] = "qwe";
    char s2[] = "rt";
    char *c = my_strchr(s1, 'w');
    printf("%ld", c - s1);
    return 0;
}