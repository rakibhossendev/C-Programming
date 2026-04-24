#include<stdio.h>
int main(){
    double a[100];
    int n;

    printf("How many fibonacci numbers: ");
    scanf("%d",&n);

    a[0] = 0;
    a[1] = 1;

    for(int i = 2; i < n; i++){
        a[i] = a[i-1] + a[i-2];
    }

    for(int i = 0; i < n; i++){
        printf("%.0lf\n", a[i]);
    }

    return 0;
}
/*
 * n = 5
 * a[0] = 0
 * a[1] = 1
 * 
 * for i = 2; i<5; i++:
 *     -> a[2] = a[2-1] + a[2-2]  => a[2] => 0 + 1 = 1
 *     -> a[3] = a[3-1] + a[3-2]  => a[3] => 1 + 1 = 2
 *     -> a[4] = a[4-1] + a[4-2]  => a[4] => 2 + 1 = 3
 * 
 */