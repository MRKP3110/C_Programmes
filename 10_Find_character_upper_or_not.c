#include<stdio.h>
 
 int main(){
    char ch;
    printf("enter the character");
    scanf("%c", &ch);

    if(ch >= 'A'  && ch <= 'Z'){
            printf("upper case");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("lower case");
    }
    else{
        printf("not a english character");
    }
    return 0;
 }