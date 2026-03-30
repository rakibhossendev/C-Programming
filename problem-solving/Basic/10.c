//Count digits in a number
#include<stdio.h>
int main(){
    int n = 300;
    int total_num = 0;
    int digits = 0;
    while(n > 0){
        digits = n % 10;
        total_num += 1;
        n = n / 10;
    }
    printf("%d\n",total_num);
}