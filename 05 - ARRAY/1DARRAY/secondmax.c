#include<stdio.h>
#include<limits.h>
int main()
{
    int m[1000],i,n,j,max=INT_MIN,smax=INT_MIN;
    
    printf("\nHow many num you want to enter : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        int a=i+1;
        printf("\n Enter %dst num : ",a);
        scanf("%d",&m[i]);
        if (max<m[i])
        {
           smax=max;
           max=m[i];
        }
        if (smax<m[i] && max!=m[i])
        {
            smax=m[i];
        }
    }
   
    printf("\n The second max value is = %d",smax);
    
    return 0;
} 
