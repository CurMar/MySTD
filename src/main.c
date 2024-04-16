#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string.h"

int main(int argc, char *argv[])
{
    printf("===HELLO===\n");

    char a[] = {'q', 'q', 'e', 'r', 't'};
    char b[10];

    my_memcpy(b, a, 4);
    printf("%c", b[2]);
    return 0;
}