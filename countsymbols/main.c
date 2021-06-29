#include <stdio.h>

int main()
{
    double charCount;
    for (charCount = 0; getchar() != EOF; charCount++);
    printf("%.0f", charCount);
}