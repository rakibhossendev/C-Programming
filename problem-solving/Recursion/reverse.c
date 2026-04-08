#include<stdio.h>
int reverse(int n, int rev){
    int digit;
    if(n == 0){
        return rev;
    }else{
        digit = n % 10;
        return reverse(n/10,rev * 10 + digit);
    }
}

int main(){
    int x;
    x = reverse(123,0);
    printf("%d",x);
    return 0;
    
}
/*
 * reverse(123,0){
 *     if n == 0: ❌  ❌  ❌ ✅
 *        return 321
 * }else{
 *      digit = 123 % 10            => 3
 *      reverse(123/10, 0 * 10 + 3) => reverse(12,3)
 *      digit = 12 % 10             => 2
 *      reverse(12/10, 3 * 10 + 2)  => reverse(1,32)
 *      digit = 1 % 10              => 1
 *      reverse(0,32 * 10 + 1)      => reverse(0,321)
 * }
 * 
 * reverse(12,3)
 *     reverse(1,32)
 *     reverse(0,321)
 */