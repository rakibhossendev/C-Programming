#include <stdio.h>
#include <stdbool.h>
//Global variable
int x = 20;


void display(){
    int a = 30;
    printf("\n%d is a local variable",a);
    printf("\n%d is global variable",x);
}
//Local variable

int main(void){
    int myNum = 15;
    float floatNum = 5.8;
    char c = 'd';
    double d = 7.8;
    bool isBool = true;
    
    //Finding zise of nums
    printf("\n%zu Bytes integer",sizeof(myNum));
    printf("\n%zu Bytes float ",sizeof(floatNum));
    printf("\n%zu Bytes chater",sizeof(c));
    printf("\n%zu Bytes double",sizeof(d));
    printf("\n%zu Bytes boolean",sizeof(isBool));
    
    display();
    return 0;
}