#include<stdio.h>
int main()
{
    int i,j,no,r,c,arr[100][100];

    printf("\n Enter the value of matrix .");
    printf("\n======================================\n");

    printf("\n Enter the value of rows : ");
    scanf("%d",&r);

    printf(" Enter the value of colmus : ");
    scanf("%d",&c);

    printf("\nEnter eliment of matrix.\n");

    printf("\n======================================\n");

    arr[r][c];

    // first matrix input.
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            int a=j+1;
            printf(" Enter %dst number matrix : ",a);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("\ntranspose of matrix.\n");
    printf("\n======================================\n");

    // print addition of matrix  
    for (i=0; i<c; i++)
    {
        for (j=0; j<r; j++)
        {
           printf("%d ",arr[j][i]);
        }
        printf("\n");
    } 
    return 0;
}