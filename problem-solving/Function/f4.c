// Calculate diameter, circumference, and area of circle
#include<stdio.h>
double input(){
    double r;
    printf("Enter redius: ");
    scanf("%lf",&r);
    return r;
}
void dia(double rr){
    printf("Diameter or this circule: %lf\n",(2*rr));
}
void cir(double rr){
    printf("Circumference of this circule: %lf\n",(2*3.141*rr));
}
void area(double rr){
    printf("Area of this circule: %lf\n",(3.141*(rr*rr)));
}

int main(){
    double rr;
    rr = input();
    dia(rr);
    cir(rr);
    area(rr);
    
}