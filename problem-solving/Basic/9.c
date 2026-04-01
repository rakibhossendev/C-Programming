//9. Check palindrome number
#include<stdio.h>
int main(){
    int n = 252;
    int digits;
    int rev = 0;
    int num = n;
    char *palindrome = "not palindrome";
    while(n > 0){
        digits = n % 10;
        rev = rev * 10 + digits;
        n = n / 10;
    }
    if(num == rev){
        palindrome = "number is palindrome";
    }
    printf("%d %s\n",num,palindrome);
    
    return 0;
    
}