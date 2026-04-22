#include<stdio.h>
int main(){
    int array[5] = {1,2,3,4,5};
    int length = sizeof(array) / sizeof(array[0]);
    printf("%d ",length);
}
