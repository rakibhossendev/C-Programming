#include<stdio.h>
int main()
{
    int a[5] = {10,30,5,6,7};
    int position = 0;
    int value = 10;
    
    for(int i=0;i<5;i++)
    {
        if(value == a[i])
        {
            value = a[i];
            position = i + 1;
            break;
        }
    }
    
    printf("Position = %d\n",position);
    
    return 0;
}