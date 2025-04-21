#include<stdio.h>

// if (condition){
//     do somthing if true    
//       }
//   else{
//       do somthing if false
//       }


int main(){
    int age;
    printf("enter the age :");
    scanf("%d", &age);

    if (age > 18){
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");

    }
    else{
        printf("not adult \n");
    }
    return 0;
}
