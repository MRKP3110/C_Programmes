#include<stdio.h>

//if(condition 1 ){
//    do somthing if true
//     }
// else if(condition 2 ){
//      do somthing if 1 is false & 2 is true
//        }
//  else {}


int main(){
    int age;
    printf("enter the age :");
    scanf("%d", &age);

    if(age >= 18){
        printf("adult \n");
    }
    else if(age > 13 && age < 18){
        printf("teenager \n");
    }  
    else{
        printf("child \n");
    }
    return 0;
}