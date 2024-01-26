#include<stdio.h>
int main()
{
    int i,j,no,r,c,r2,c2;

    printf("\n Enter the value of first array .");
    printf("\n======================================\n");

    printf("\n Enter the value of rows : ");
    scanf("%d",&r);

    printf(" Enter the value of colmus : ");
    scanf("%d",&c);

    printf("\n Enter the value of second array .");
    printf("\n======================================\n");
    
    printf("\n Enter the value of rows : ");
    scanf("%d",&r2);

    printf(" Enter the value of colmus : ");
    scanf("%d",&c2);

    printf("\nEnter eliment of matrix.\n");
    printf("\n======================================\n");
    int arr[r][c],brr[r2][c2],res[5][5];
    // first matrix input.
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            int a=j+1;
            printf(" Enter %dst number first matrix : ",a);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    // second matrix input.
    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            int a=j+1;
            printf(" Enter %dst number of second matrix : ",a);
            scanf("%d",&brr[i][j]);
        }
    }
    // addition of matrix .
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
           res[i][j]=arr[i][j]-brr[i][j];
        }
    }
    printf("\n======================================\n");
    // print addition of matrix .
    printf("\nSubscarct of matrix.\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
           printf("%d ",res[i][j]);
        }
        printf("\n");
    } 
    return 0;
}