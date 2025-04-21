#include<stdio.h>

// condition ? do somthing if true : do somthing if false;

int main(){
    int age;
    printf(" enter age :");
    scanf("%d", &age);

    age >= 18 ? printf("adult \n") : printf("not adult \n");

    return 0;
}