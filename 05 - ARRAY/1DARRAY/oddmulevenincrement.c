#include<stdio.h>
int main()
{
    int m[1000],i,n,sum=0;

    printf("\nHow many eliment : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        int a=i+1;
        printf("\n Enter %dst num : ",a);
        scanf("%d",&m[i]);
        if (i%2!=0) 
        {
            m[i] = m[i] * 2; // if odd .
        }
        else 
        {
            m[i] = m[i] + 10; // if even .
        }
        printf("\n");
    }   
    for (i=0; i<n; i++)
    {
        printf("\n SUM = %d ",m[i]);
    }
    return 0;
}