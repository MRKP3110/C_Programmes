#include<stdio.h>

//print the number from 0 to 4 , if n is given by user (n=4)

int main(){
    int n;
     printf("enter the number");
     scanf("%d ", &n);

     int i =0;
      while(i <= n){
        printf("%d \n", i);
        i++;
      }
    return 0;
}