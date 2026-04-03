// add two number(input user)
#include<stdio.h>
void sum(int x,int y){
    int sum = x + y;
    printf("%d + %d = %d",x,y,sum);
}
void main(){
    int a,b;
    printf("Enter number1: ");
    scanf("%d",&a);
    printf("Enter number2: ");
    scanf("%d",&b);
    
    sum(a,b);
}