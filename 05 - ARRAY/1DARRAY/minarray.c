#include<stdio.h>
#include<limits.h>
int main()
{
    int m[1000],i,n,j,min=INT_MAX;
    
    printf("\nHow many num you want to enter : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        int a=i+1;
        printf("\n Enter %dst num : ",a);
        scanf("%d",&m[i]);
        if (min>m[i])
        {
            min=m[i];
        }
    }
    printf("\n Minimum value is = %d",min); 

    return 0;
}