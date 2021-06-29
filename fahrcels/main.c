#include <stdio.h>
#define STEP 20

float fahrToCels(fahr){
    return (5.0/9.0) * (fahr - 32);
}
int main(){
    float fahr;

    printf("%3s\t%3s\n","fahr", "celcius");
    for (fahr = 300; fahr >= 0; fahr -= STEP){
        printf("%3.0f\t%3.2f\n",fahr, fahrToCels(fahr));
    }

}