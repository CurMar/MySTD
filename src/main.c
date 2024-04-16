#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string.h"

int main(int argc, char *argv[])
{
    printf("===HELLO===\n");

    char a[] = {'q', 'q', 'e', 'r', 't'};
    char b[] = {'a', 'q', 'e', 'r', 't'};

    my_memset(a, 'g', 2);
    printf("%c", a[1]);
    return 0;
}