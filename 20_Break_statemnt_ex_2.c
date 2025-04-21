#include<stdio.h>

//keap takeing numbers as input from user until user enters an odd number. 

int main(){
    int n ;
    do{
        printf("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 2 != 0){
            break;
        }
    }while(1);
    printf("Thank you");
    return 0;
}