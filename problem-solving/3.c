//3. Check if a number is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a ==0){
        printf("%d is zero",a);
    }else if(a%2 == 0){
        printf("%d is evan",a);
    }else{
        printf("%d is odd",a);
    }
    return 0;
}