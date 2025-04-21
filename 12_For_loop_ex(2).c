#include<stdio.h>

    // i=i+1 : i++
    // i=i-1 : i-- (only for +1)

int main(){
    for( int i = 1; i<=100; i = i+1){
        printf("%d \n", i);
    }

    //  for decremeant
    // for(int i =10; i>= 1; i=i-1){
    //    printf("%d \n", i);
    //  }
    return 0;
}
