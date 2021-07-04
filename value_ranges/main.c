#include <stdio.h>
#include <limits.h>

#define FLOAT_CONST 3.1f

int main() {
    printf("%3.2f\n", FLOAT_CONST );
    printf("char min is: %3d, char max is: %3d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char max is: %3d\n", UCHAR_MAX);
    printf("short min is: %3d, short max is: %3d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short max is: %3d", USHRT_MAX);
    printf("int min is: %3d, int max is: %3d\n", INT_MIN, INT_MAX);
    printf("unsigned int max is: %3d\n", UINT_MAX);
    printf("long int min is %3ld, long int max is: %3ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long max is %ld\n", ULONG_MAX);
}