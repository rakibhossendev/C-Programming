#include<stdio.h>

int sum(int n){
    if(n == 1){
        return 1;
    }else{
        return n + sum(n - 1);
    }
}
int main(){
    int x;
    x = sum(5);
    printf("sum of n = %d\n",x);
}
/*-> dry run
 * 
 * int sum(5)
 *      if(n == 1) ❌ ❌ ❌ ✅
 *         return 1 
 *      else{
 *        5 + sum(4) -> 5 + 10 = 15
 *        4 + sum(3) -> 4 + 6 = 10
 *        3 + sum(2) -> 3 + 3 = 6
 *        2 + sum(1) -> 2 + 1 = 3
 * 
 * 5 + sum(4) -> 5 + 10 = 16
 *   4 + sum(3) -> 4 + 6 = 10
 *     3 + sum(2) -> 3 + 6 = 6
 *       2 + sum(1) -> 2 + 1 = 3
 *
 */