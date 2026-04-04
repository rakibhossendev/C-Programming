#include<stdio.h>
int cube(int n){
    printf("Entet a number: ");
    scanf("%d",&n);
    return n*n*n;
}
int main(){
    printf("Cube : %d\n",cube(7));
    return 0;
}