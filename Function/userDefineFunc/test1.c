// No pussed argument no return value function
#include<stdio.h>
void add(){
    int num1,num2,sum;
    num1 = 10,num2 = 30;
    sum = num1+num2;
    printf("%d + %d = %d",num1,num2,sum);
}
void main(){
    add();
}