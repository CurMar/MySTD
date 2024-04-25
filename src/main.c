#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    printf("===HELLO===\n");
    double d = 12345;
    char *s = "+1234.67";
    printf("%lf", my_atof(s));
    return 0;
}