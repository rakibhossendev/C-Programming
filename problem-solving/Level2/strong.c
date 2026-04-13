#include<stdio.h>
int fact(int n){
    int fact = 1;
    int i = 1;
    
    while(i <= n){
        fact *= i;
        
        i += 1;
    }
    return fact;
}

int strongNumber(int n){
    int len = 0, digit,temp=n,strong=0;
    while(temp != 0){
        digit = temp % 10;
        strong += fact(digit);
        
        temp /= 10;
    }
    if(strong == n){
        return 1;
    }else{
        return 0;
    }
    
}
int main(){
    printf("%d",strongNumber(145));
    
}