#include <stdio.h>

int main(){
    char prev, cur;
    prev = 'a';
    for(;(cur = getchar()) != EOF;){
       if (prev == ' ' && cur == ' '){
           continue;
       }
       putchar(cur);
       prev = cur;
    }
}