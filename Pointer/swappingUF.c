#include<stdio.h>
void swappingTwoNum(int *ptr1, int *ptr2){
    int temp;
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
}
int main(){
    int x = 10, y = 20;
    swappingTwoNum(&x,&y);
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}