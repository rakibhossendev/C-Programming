
#include<stdio.h>
int main(){
    int n = 4;
    int sum = 0;
    for(int i = 0; i<n; i++){
        n = n + i;
        printf("sum of %d + %d = %d\n",n, i,sum);
    }
}