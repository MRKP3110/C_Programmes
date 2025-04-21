#include<stdio.h>

// write a function to find sum of two digits of a number.

int getsum (int a , int b );

int main(){
   
    printf("sum is : %d", getsum( 10, 15));
    return 0;
}

int getsum (int a , int b ){
     int sum =  0 ;
     sum = a +b ;

    return sum;
}