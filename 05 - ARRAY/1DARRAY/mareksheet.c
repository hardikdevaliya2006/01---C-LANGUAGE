#include<stdio.h>
int main()
{
    int m[1000],i,j,n;
    
    printf("\nHow many student in your class : ");
    scanf("%d",&n);
    printf("\n============================================");

    // for input.
    for (i=0; i<n; i++)
    {
        int a=i+1;
        printf("\n Enter the marek of %dst student : ",a);
        scanf("%d",&m[i]);
    }

    printf("\n===========================================");

    // for print less than 35.
    for (i=0; i<n; i++)
    {   int a=i+1;
        if (m[i]<35)
        {
            printf("\n%dst student get 35 less than %d",a,m[i]);
        }
    }

    return 0;
}