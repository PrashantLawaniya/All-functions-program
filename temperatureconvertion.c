// to convert celcius into fehrenheit
#include<stdio.h>
float celcius(float a);
int main(){
    printf(" the fehrenheit is equal to %f",celcius(77));
    return 0;
}
float celcius(float a){
    float celcius,fehrenheit;
     fehrenheit=(a*9/5)+32;
    return fehrenheit;
}

