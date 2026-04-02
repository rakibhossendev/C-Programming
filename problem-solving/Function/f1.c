//f1. add to number using void type function.
#include<stdio.h>
void sum(){
    int num1,num2,sum;
    num1 = 10;
    num2 = 30;
    sum = num1 + num2;
    printf("%d + %d = %d",num1,num2,sum);
}
void main(){
    sum();
}