#include <stdio.h>

int main()
{
    long lineCount = 0;
    long tabCount = 0;
    long spaceCount = 0;
    char c;
    for (;(c = getchar()) != EOF;){
        if (c == '\n'){
            ++lineCount;
        } else if (c == '\t'){
            ++tabCount;
        } else if (c == ' '){
            ++spaceCount;
        }
    }
    printf("lines\t%6ld\ntabs\t%6ld\nspaces\t%6ld\n", lineCount, tabCount, spaceCount);
}