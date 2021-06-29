#include <stdio.h>

int main(){
    float celsius;

    printf("%3s\t%3s\n", "celsius", "fahr");
    for (celsius = 15; celsius >= 0; celsius -= 1){
        printf("%3.0f\t%3.1f\n", celsius, (celsius * 9.0/5.0) + 32);
    }

}