#include<stdio.h>
int main()
{
    int i,j,no,r,c;

    printf("\n Enter the value of rows : ");
    scanf("%d",&r);

    printf(" Enter the value of colmus : ");
    scanf("%d",&c);

    printf("\nEnter eliment of matrix.\n");

    int arr[r][c];

    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            int a=j+1;
            printf(" Enter %dst number : ",a);
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}