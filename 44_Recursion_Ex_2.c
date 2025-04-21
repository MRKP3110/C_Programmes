#include<stdio.h>

//sum of first n natural numbers.
//Recursion Function:sum(n)=sum(n-1)+n.

 int sum (int n);

 int main(){
    printf("sum is:%d ",sum(5));
    return 0;
 }

 int sum(int n){
    if (n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);  // sum of 1 to n
     int sumN = sumNm1 + n;
     return sumN; 
 }