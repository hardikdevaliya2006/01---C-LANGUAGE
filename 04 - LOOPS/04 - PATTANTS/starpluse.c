#include<stdio.h>
int main()
{
    int n,i,j;

    printf("\n Enter rows: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {  
           // a = n/2+1; 
            if (j==n/2+1 || i==n/2+1)
            {
             printf("*");
            }
            else 
            {
                printf(" ");
            }     
        }  printf("\n");
    }
    
    return 0;
}