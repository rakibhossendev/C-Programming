/*Documentation
 * file: structure.c
 * author: Rakib Hossen
 * description: Program to find sum
 */
 // Link / prepocessor
#include <stdio.h>

// Defination
#define x 20

// Global decleartion
int sum(int y);

// Main() function
int main(){
    int y = 55;
    printf("sum %d",sum(y));
    return 0;
}

// Sub program
int sum(int y){
    return x + y;
}