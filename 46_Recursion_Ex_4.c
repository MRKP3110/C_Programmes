#include<stdio.h>

//Write a function to convert celsius to fahrenheit.
// f = (celsius * 9/5)+32

float convertTemp(float celsius);

int main(){
    float far = convertTemp(56);
    printf("far :%f",far);
    return 0;
}

float convertTemp(float celsius){
    float far = celsius *(9.0/5.0)+32;
    return far;
}