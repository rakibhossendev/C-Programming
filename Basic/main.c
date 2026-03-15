#include <stdio.h>
#include <stdbool.h>

int x = 20;
extern int z;

void myFunc();

void display(){
    int a = 30;
    printf("\n%d is a local variable",a);
    printf("\n%d is global variable",x);
}

int main(void){

    z = 10;

    display();
    myFunc();

    return 0;
}