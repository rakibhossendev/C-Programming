#include<stdio.h>
int main(){
    int marks[5];
    for(int i = 0; i < 5; i++){
        printf("Enter number in aeray: ");
        scanf("%d",&marks[i]);
    }
    for(int i = 0; i<5; i++){
        printf("Number is = %d\n",marks[i]);
    }
    return 0;
}