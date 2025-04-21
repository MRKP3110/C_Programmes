#include<stdio.h>
        //even -> 1
        //odd -> 0
 int main(){
    int x;
    printf("enter a number :");
    scanf("%d",&x);

    printf("%d", x % 2 == 0);
    return 0;
 }