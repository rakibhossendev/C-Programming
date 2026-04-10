#include<stdio.h>
int fib(int x){
    if(x == 0 || x == 1){
        return 1;
    }else{
        return x + fib(x - 1);
    }
}
int main(){
    int x;
    x = fib(5);
    printf("%d",x);
    return 0;
}
/*
 * 5 + fib(5)
 *   -> 4 + fib(4)        => 4 + 8 = 
 *     -> 3 + fib(3)      => 3 + 4 = 8
 *       -> 2 + fib(2)    => 2 + 2 = 4
 *         -> 1 + fib(1)  => 1 + 1 = 2
 */