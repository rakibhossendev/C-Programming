#include<stdio.h>
int main(){
    int A[1][2];
    int B[1][2];
    printf("Enter element for A Matrix \n");
    printf("\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter element for B Matrix \n");
    printf("\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}