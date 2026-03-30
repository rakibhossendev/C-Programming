//5. Check if a number is prime
#include<stdio.h>
#include<stdbool.h>
int main(){
    int num = 5;
    int i = 2;
    bool isPrime = true;
    if(num <= 1){
        isPrime = false;
    }
    while(i * i <= num){
        if(num%i == 0){
            isPrime = false;
            break;
        }
        i += 1;
        
    }
    
    printf("%s\n",isPrime ? "Prime":"Not Prime");
}
/*
 * num = 5
 * i = 2
 * 
 *1. if 5 <= 1 ❌
 *
 *2. while 2 × 2 <= 5 => 4 <= 5 ✅{
 *    if 5 % 4 == 0 => 1 == 0 ❌
 * 
 * }
 * 
 * isPrime = true
 * 
 */