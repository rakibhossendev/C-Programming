#include<stdio.h>
int length;
void inputLength(){
    printf("Enter length: ");
    scanf("%d", &length);
}
void inputArray(int array[]){
    for(int i = 0; i < length; i++){
        printf("Enter %d number student mark: ", i+1);
        scanf("%d", &array[i]);
    }
}
void avrage(int avg[]){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + avg[i];
    }
    float avg_mark = (float)sum / length;
    printf("Avrage: %.2f\n", avg_mark);
}
int main(){
    inputLength();
    int array[length];
    inputArray(array);
    avrage(array);
    return 0;
}