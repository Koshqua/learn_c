// finds the longest line
#include <stdio.h>

#define MAX_SIZE 1000


int getLine(char to[], int lim){
    int i,c;
    for (i = 0; i < lim -1 && (c = getchar()) != EOF ; ++i){
        to[i] = c;
        if (c == '\n'){
            ++i;
            break;
        }
    }
    to[i] = '\0';
    return i;
}

void cp (char from[], char to[]){
    int i;
    for (i = 0; (to[i] = from[i]) != '\0'; ++i);
}

int main(){
    int len,max, templen;
    max = 0;
    templen = 0;
    char line[MAX_SIZE];
    char longest[MAX_SIZE];
    while ((len = getLine(line, MAX_SIZE)) > 0){
        if (line[len -1] == '\n'){
            if(templen > 0){
                templen += len;
                max = templen;
                cp(line, longest);
                templen = 0;
            } else {
                if (len > max){
                    max = len;
                    cp(line, longest);
                }
            }
        } else if (len == (MAX_SIZE -1) && line[len -1] != '\n'){
            templen += len;
            printf("%s\n", line);
        }
    }
    printf("length is %3d\n", max);
    printf("%s",longest);
}

