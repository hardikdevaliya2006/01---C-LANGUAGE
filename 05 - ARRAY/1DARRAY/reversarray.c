#include<stdio.h>
#include<limits.h>
int main()
{
    int m[7]={1,2,3,4,5,6,7},n[7],i,no,j;
    
    for (i=0; i<=6; i++)
    {
        n[i]=m[6-i];
    }
    for (i=0; i<=6; i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
} 