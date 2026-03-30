/*
 * Calculate factorial using loop
 */
#include <stdio.h>
int main(){
    int n = 5;
    int fact = 1;
    int i = 1;
    while(i <= n){
        fact = fact * i;
        /* 1 <= 5 ✅
         *     fact = 1 * 1 = 1
         * 2 <= 5 ✅
         *     fact =  1 * 2 = 2
         * 3 <= 5 ✅
         *     fact = 2 * 3 = 6
         * 4 <= 5 ✅
         *     fact = 6 * 4 = 24
         * 5 <= 5 ✅
         *     fact = 24 * 5 = 120
         */
         i += 1;
    }
    printf("%d\n",fact);
}

/* My logic why not working?
 * n = 5
 * i = 1
 * fact = 0
 * 
 * 1 <= 5 ✅
 *     fact = 5 * (5 - 1) = 20
 * 2 <= 5 ✅
 *     fact = 5 * (5 - 1) = 20
 * 3 <= 5 ✅
 *    fact = 5 * (5 - 1) = 20
 * 4 <= 5 ✅
 *     fact = 5 * (5 - 1) = 20
 * 5 <= 5 ✅
 *     fact = 5 * (5 - 1) = 20
 * 
 * but if i do, 20 + 20 + 20 + 20 + 20 = 120 it is 5 factorial
 * 
 * fact = fact * fact
 * sum = 20 + 20 = 40
 * sum = sum + fact
 * sum = 40 + 20 = 80
 * 
 */
