// Function based calculator
#include<stdio.h>
int x,y,result;
char oprator;

void input(){
    printf("Oprator: ");
    scanf("%c",&oprator);
    
    printf("Enter number: ");
    scanf("%d %d",&x,&y);
}
void sum(){
    int sum;
    sum = x + y;
    printf("%d + %d = %d\n",x,y,sum);
}
void sub(){
    int sub;
    sub = x - y;
    printf("%d - %d = %d\n",x,y,sub);
}

void mul(){
    int mul;
    mul = x * y;
    printf("%d × %d = %d\n",x,y,mul);
}

void dev(){
    float dev;
    dev = (float)x / y;
    printf("%d ÷ %d = %f\n",x,y,dev);
}
void show(){
    printf("Enter oprator: \n");
    printf("+     - \n*     /\n");
    input();
    if(oprator == '+'){
        sum();
    }else if(oprator == '-'){
        sub();
    }else if(oprator == '*'){
        mul();
    }else if(op#####rator == '/'){
        dev();
    }else{
        printf("Somting worng");
    }
}
int main(){
    show();
    return 0;
}