#include<stdio.h>
int main()
{
    int m[1000],i,n,sum=0;
    
    printf("\nHow many num you want to sum : ");
    scanf("%d",&n);
    //for input.
    for (i=0; i<n; i++)
    {
        int a=i+1;
        printf("\n Enter %dst num : ",a);
        scanf("%d",&m[i]);
    }
    // for sum .
    for (i=0; i<n; i++)
    {
        sum = sum + m[i];
    }

    printf("\n Sum of num = %d",sum);
    
    return 0;
}