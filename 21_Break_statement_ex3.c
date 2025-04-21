#include<stdio.h>

//keep taking numbers as input from user until user enters a number which is multiple of 7.
int main () {
    int n ;
     do{
        printf("Enter the number:");
    scanf("%d",&n);
    printf("%d\n", n);
    
    if(n%7 == 0){ // multiple of 7
        break;
    }

     }while(1);
     printf("Thank you");

   
     return 0;
}        


