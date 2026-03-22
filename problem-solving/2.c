//2. Swap two numbers without using a third variable
#include <stdio.h>
int main(){
    int a,b;
    a = 10;
    b = 30;
    printf("a = %d, b = %d\n",a,b);
    a = a + b; // 10 + 30 = 40
    b = a - b; // 40 - 30 = 10
    a = a - b; // 40 - 10 = 30
    
    printf("a = %d, b = %d\n",a,b);
    
    return 0;
}