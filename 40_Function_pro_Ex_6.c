#include<stdio.h>
#include<math.h>

//Write function to calculate area of a square& a circle &a rectangle

float squareArea(float side);
float circleArea(float red);
float rectangleArea(float a, float b);

int main(){
        float a = 5.0;
        float b = 10.0;
        float red =5.0; 

       printf("area is : %f\n",rectangleArea(a,b));
       
        printf("area is:%f\n",squareArea(a));

       printf("area is :%f\n",circleArea(red));
        return 0;

        
     
}

float squareArea(float side){
    return side*side;
}

float circleArea(float red){
    return 3.14*red*red;
}

float rectangleArea(float a, float b){
    return a*b;
}