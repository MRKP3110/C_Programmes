#include<stdio.h>

//print "hello world" 5 times

void printHW(int count);

int main(){
    printHW(5);
    return 0;
}

void printHW(int count){
      if (count == 0){
        return;
      }
    printf("Hello World\n");
    printHW(count-1);
}