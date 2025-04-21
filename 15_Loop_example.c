#include<stdio.h>

//print the sun of first n natural numbers.(n=4) also, printf them in reverse

int main(){
    int n ;
    printf("enter the number :");
    scanf("%d", &n);

    int sum =0;
    for(int i=1 ; i<=n ; i++){
        sum = sum+i;
    }
    printf("sum is %d \n",sum);

    // reverse

    for(int i= n ; i >=1 ; i--  ){
        printf("%d \n" ,i );
    } 
    return 0;
}

