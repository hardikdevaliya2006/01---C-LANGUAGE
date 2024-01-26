#include<stdio.h>
int main()
{
    int m[1000],i,n,sumodd=0,sumeven=0;

    printf("\nHow many eliment : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        int a=i+1;
        printf("\n Enter %dst num : ",a);
        scanf("%d",&m[i]);
        if (i%2!=0) 
        {
            sumeven+=m[i];
        }  
        else 
        {
            sumodd+=m[i];   
        }
        printf("\n");
    }
    printf("\n SUM = %d ",sumodd-sumeven);   
    
    return 0;
}