#include<stdio.h>

//Write a function to calculate percentage of a student from marks in science,math & sanskrit.

float percentage(float science, float math , float sanskrit);

int main(){
    float science = 98.00;
    float math = 78.00;
    float sanskrit = 99.00;

    printf("percentage is :%f",percentage(science,math,sanskrit));
    return 0;
}

float percentage(float science , float math , float sanskrit){
    return((science+math+sanskrit)/3.00);
}
