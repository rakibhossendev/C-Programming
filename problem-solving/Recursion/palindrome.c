#include<stdio.h>
int reverse(int x,int rev){
    int digit;
    if(x == 0){
        return rev;
    }else{
        digit = x % 10;
        return reverse(x/10,rev * 10 + digit);
    }
}
int isPalindrome(int x){
    int a = reverse(x,0);
    if(a == x){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int y;
    y = isPalindrome(131);
    printf("%d\n",y);
}
/*
 * 
 */