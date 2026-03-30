
#include<stdio.h>
int main(){
    int n = 5;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + i;
        printf("%d + %d = %d\n",sum,i,sum);
    }
}

/*
 * sum = 0
 * for(     ){ 
 *  sum = 1 
 *  sun = 5 + 2 = 8
 *  sum = 8 + 3 =  
 * }
 * 
 * 
 */