#include<stdio.h>
int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

int asmtrong(int n){
    int temp,digit,len,sum;
    temp = n;
    len = 0;
    sum = 0;
    
    while(temp != 0){
        len++;
        temp /= 10;
    }
    
    temp = n;
    
    while(temp != 0){
        digit = temp % 10;
        sum += power(digit,len);
        
        temp /= 10;
    }
    if(sum == n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int x = asmtrong(153);
    printf("%d",x);
    
}

/*
 * power(2,3);
 * i    i < 3    result      i++       
 * ------------------------------
 * 0    0 < 3   1 * 2 = 2    1
 * 1    1 < 3   2 * 2 = 4    2
 * 2    2 < 3   4 * 2 = 8    3
 * 
 * amstrong(153)
 *
 * temp    len
 * ------------ 
 * 153      1
 * 15       2
 * 1        3
 * 
 * digit    sum            temp
 * -----------------------------
 * 3       0 + 3 ^ 3 = 27      15
 * 5       27 + 5 ^ 3 = 125    1
 * 1       152 + 1 ^ 3 = 153   0
 * 
 */