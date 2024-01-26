#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,r,c,sum=0,max=INT_MIN;

    printf("\n Enter the value of matrix.");
    printf("\n======================================\n");

    printf("\n Enter the value of rows : ");
    scanf("%d",&r);

    printf(" Enter the value of colmus : ");
    scanf("%d",&c);

    printf("\nEnter eliment of matrix.");
    printf("\n======================================\n");

    int arr[r][c];

    // matrix input.
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            int a=j+1;
            printf(" Enter %dst number of matrix : ",a);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    
    // print matrix.
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");  
    }
    printf("\n");
    
    // sum of matrix .
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            if (max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    printf("======================================");
    // print sum all eliment of matrix .
    printf("\n YOUR MAX ELIMENT IS = %d \n",max);
    return 0;
}