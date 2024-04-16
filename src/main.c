#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string.h"

int main(int argc, char *argv[])
{
    printf("===HELLO===\n");

    char a[] = {'q', 'q', 'e', 'r', 't'};
    char b[10];

    char *c = my_memchr(a, 'q', 4);
    printf("%d", c - a);
    return 0;
}