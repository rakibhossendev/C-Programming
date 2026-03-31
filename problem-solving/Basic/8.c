#include <stdio.h>
int main(){
    int n = 234;
    int digits;
    int rev = 0;
    while(n > 0){
        digits = n % 10;
        rev = rev * 10 + digits;  
        n = n / 10;
    }
    printf("%d",rev);
    return 0;
}

/*
 * -> 234 > 0 ✅
 *     digits = 234 % 10 = 4
 *     rev = 0 * 10 + 4 = 4
 *     n = 234 / 10 = 23
 * -> 23 > 0 ✅
 *     digits = 23 / 10 = 3
 *     rev = 4 * 10 + 3 = 43
 *     n = 23 / 10 = 2
 * -> 2 > 0 ✅
 *     digits = 2 % 10 = 2
 *     rev = 43 * 10 + 2 = 432
 *     n = 0.2 / 10 = 0
 * -> 0 > 0 ❌
 */