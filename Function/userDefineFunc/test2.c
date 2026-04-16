// No passed argument but return value
#include<stdio.h>

int sum(){
    int num1,num2,res;
    num1 = num2 = 10;
    res = num1 + num2;
    return res;
}
int sub(){
    int num1,num2,res;
    num1 = num2 = 10;
    res = num1 - num2;
    return res;
}
float flt(){
    float num1,num2,res;
    num1 = num2 = 10;
    res = num1 / num2;
    return res;
}
void main(){
    printf("sum of a nd b = %d\n",sum());
    printf("subtruction of a nd b = %d\n",sub());
    printf("floating of a nd b = %f\n",flt());
    
}