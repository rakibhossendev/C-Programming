#include<stdio.h>
int fact(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}
int main(){
    int x;
    x = fact(5);
    printf("%d\n",x);
}
/*
 * 5 * fact(5) -> 5 * 24 = 120
 *   4 * fact(4) -> 4 * 6 = 24
 *     3 * fact(3) -> 3 * 2 = 6
 *       2 * fact(2) -> 2 * 1 = 2 ^
 *         1 * fact(1) -> ^ 1 
 * 
 * fact(5) -> n = 5,  n = 4, n = 3, n = 1, n = 0
 *    if n == 0 ❌ ❌ ❌ ❌
 *         return 1
 *    else:
 *       5 * fact(5 - 1) | 24 * 5 =  120
 *       4 * fact(4 - 1) | 4 * 6 = 24
 *       3 * fact(3 - 1) | 3 * 2 = 6
 *       2 * fact(2 - 1) | 2 * 1 = 2
 *       1 * fact(1 - 1) | 1 * 1 = 1
 */