#include<stdio.h>
int main()
{
    int rows,colums,i,j;

    printf("\n Enter rows: ");
    scanf("%d",&rows);

    printf("\n Enter colums : ");
    scanf("%d",&colums);

    for (i=1;i<=colums; i++)
    {
        for (j=1;j<=rows;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}