#include<stdio.h>
int main()
{
    int n,i,j,a;

    printf("\n Enter rows: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {   a=1;
        for (j=1;j<=i;j++)
        {   
            printf("%d ",a);
            a=a+2;
        }
            printf("\n");
    }
    
    return 0;
}