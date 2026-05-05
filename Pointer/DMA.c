#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    
    //ptr = (int*)malloc(5 * sizeof(int));
    
    ptr = (int *)calloc(5,sizeof(int));
    
    if(ptr == NULL){
        printf("Memmory not allocated");
    }else{
        printf("Memmory allocated\n");
        free(ptr);
        
        printf("Memmory freed\n");
        
        realloc(ptr,5*sizeof(int));
    }
}