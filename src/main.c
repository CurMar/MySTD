#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string.h"

int main(int argc, char *argv[])
{
    printf("===HELLO===\n");
    char s1[16] = "qwe";
    char s2[] = "rt";
    my_strcat(s1, s2);
    printf("%s", s1);
    return 0;
}