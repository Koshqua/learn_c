#include <stdio.h>

int main(){
    int c,i,nwhite,nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; i++){
        ndigit[i] = 0;
    }
    for (;(c = getchar()) != EOF;){
        if (c >= '0' && c <= '9'){
            ++ndigit[c - '0'];
        } else if (c == ' ' || c == '\t' || c == '\n'){
            ++nwhite;
        } else {
            ++nother;
        }
    }
    int j;
    for (i = 0; i < 10; ++i){
        printf("%10d |", i);
        for (j = 0; j <= ndigit[i]; ++j){
            printf("_");
        }
        printf("\n");
    }
    printf("whitespace |");
    for (j = 0; j < nwhite; ++j) printf("_");
    printf("\n");
    printf("other      |");
    for (j = 0; j < nother; ++j) printf("_");
    printf("\n");
}