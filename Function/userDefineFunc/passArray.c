#include<stdio.h>
int arr(int num[5]){
    for(int i = 0; i<5; i++){
        printf("%d\n",num[i]);
    }
}
int main(){
    int num[5] = {10,20,30,60,80};
    arr(num);
}