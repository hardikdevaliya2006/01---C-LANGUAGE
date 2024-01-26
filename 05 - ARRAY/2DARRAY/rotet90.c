#include<stdio.h>
int main()
{
    int i,j,no,arr[100][100],temp,k;

    printf("\n Enter the value of matrix .");
    printf("\n======================================\n");

    printf("\n Enter the value of rows/colmus : ");
    scanf("%d",&no);

    printf("\nEnter eliment of matrix.\n");

    printf("\n======================================\n");

    arr[no][no];

    // first matrix input.
    for (i=0; i<no; i++)
    {
        for (j=0; j<no; j++)
        {
            int a=j+1;
            printf(" Enter %dst number matrix : ",a);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("\ntranspose of matrix.\n");
    printf("\n======================================\n");

    // print transpos of matrix  
    for (i=0; i<no; i++)
    {
        for (j=0; j<=i; j++)
        {
            temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        printf("\n");
    } 
    for (i=0; i<no; i++)
    {
        for (j=0; j<no; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    // revers matrix,
    for (i=0; i<no; i++)
    {
        j=0;
        k=no-1;
        while (j<k)
        {
            temp = arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("\n");
    printf("\nRotet 90 dgree of matrix.\n");
    printf("\n======================================\n");
    for (i=0; i<no; i++)
    {
        for (j=0; j<no; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}