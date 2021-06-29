#include <stdio.h>


int power(int base, int n){
    int i;
    int r = 1;
    for (i = 0; i < n; ++i){
        r *= base;
    }
    return r;
}


int main(){
    printf("%d\n",power(2,2));
}

