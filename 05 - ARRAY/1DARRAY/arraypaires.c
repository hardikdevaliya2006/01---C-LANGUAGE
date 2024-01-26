#include<stdio.h>
#include<limits.h>
int main()
{
    int m[8]={1,2,3,4,5,6,7,8},i,j,x;
    
    printf("\n Enter the value of x : ");
    scanf("%d",&x);

    for (i=0; i<=7; i++)
    {
        for (j=i+1; j<=7; j++)
        {
            if (m[i]+m[j]==x)
            {
                printf("\n(%d,%d)",m[i],m[j]); 
            }
        }
    }
    return 0;
}