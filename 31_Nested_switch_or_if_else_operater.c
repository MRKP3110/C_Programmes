#include<stdio.h>

// also use switch operater

int main(){
    int number;
    printf("enter the number :");
    scanf("%d",&number);

    if (number >= 0){
        printf("positive \n");
         if(number%2 == 0){
            printf("even \n");
         }else{
            printf("odd \n");
         }
    }else{
        printf("negative \n");
    }
    return 0;
}