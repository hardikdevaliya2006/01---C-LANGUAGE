#include<stdio.h>
#include<limits.h>
int main()
{
    int m[1000],i,n,j,x,count=0;
    
    printf("\nHow many num you want to enter : ");
    scanf("%d",&n);

    printf("\nWhich eliment with you compare : ");
    scanf("%d",&x);

    for (i=0; i<n; i++)
    {
        int a=i+1;
        printf("\n Enter %dst num : ",a);
        scanf("%d",&m[i]);
        if (m[i]>x)
        {
            count++;
        }
    }
    printf("\n=> %d greter than total = %d number available.",x,count); 

    return 0;
}