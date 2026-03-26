/*
 *1. Print Hello World without using printf
 */

#include <stdio.h>
int main(){
    char *word = "Hello World";
    int i = 0;
    while(word[i] != '\0'){
        putchar(word[i]);
        i  += 1;
    }
}