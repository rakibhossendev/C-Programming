#include<stdio.h>
int length = 5;
void max(int array[]){
    int max_num = array[0];
    for(int i = 0; i<length; i++){
        if(max_num > array[i]){
            max_num = array[i];
        }
    }
    printf("Max number is: %d",max_num);
}
int main(){
    int nums[] = {10,30,60,70,20};
    max(nums);
}