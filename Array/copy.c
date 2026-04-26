#include<stdio.h>
int main(){
    int array1[5] = {10,20,30,40,50};
    int array2[5];
    for(int i = 0; i<5; i++){
        array2[i] = array1[i];
    }
    for(int i = 0; i<5; i++){
        printf("%d\n",array2[i]);
    }
}