#include<stdio.h>
int main(){
    int row, column, i, j;
    printf("Enter row and column: ");
    scanf("%d %d", &row, &column);
    int A[row][column], B[row][column], C[row][column];
    
    printf("Enter Matrix A:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter Matrix B:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    
    // Addnig
    for(i = 0; i < row; i++){
        for(j = 0; j<column; j++){
            C[i][j] = A[i][j] + A[i][j];
        }
    }
    
    printf("\nA =\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nB =\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA + B = \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}