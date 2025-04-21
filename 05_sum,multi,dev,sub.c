#include<stdio.h>

int main(){

    int a,b,c;

    printf(" Enter the value a:");
    scanf("%d", &a);
     
    printf(" Enter the value b :");
    scanf("%d", &b);

    c = a + b;
    printf("sum of A + b = %d\n", c);

    c = a-b ;
    printf(" sub of a-b = %d\n", c);

    c = a/b;
    printf(" div of a/b = %d\n", c);
    
    c = a*b;
    printf(" multi of a*b = %d\n", c);

    return 0 ;
}