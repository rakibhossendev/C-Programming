#include<stdio.h>
int main(){
    int number;
    int table;
    int i = 1;
    printf("Enter number what you see multiple table? : ");
    scanf("%d",&number);
    while(i <= 10){
        table = number * i;
        printf("%d × %d = %d\n",number,i,table);
        
        i += 1;
    }
}