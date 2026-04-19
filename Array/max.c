#include<stdio.h>
int main(){
    int array[5] = {10,20,50,30,25};
    int max = array[0];
    for(int i = 0; i < 5; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    printf("%d is max number", max);
    return 0;
}
/*
 * for i = 0; i < 5; i++       => i = 0, i = 1, i = 2, i = 3,i = 4
 *    -> if 10 < 10: ❌        => array[0]
 * 
 *    -> if 10 < 20: ✅        => array[1]
 *         -> max = 20         => array[1]
 *  
 *    -> if 20 < 50: ✅        => array[2]
 *        -> max = 50          => array[2]
 *
 *    -> if 50 < 30: ❌        => array[3]
 *  
 *    -> if 50 < 25: ❌        => array[4]
 * 
 * print 50 ✅
 */