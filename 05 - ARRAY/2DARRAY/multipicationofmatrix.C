#include<stdio.h>

int main()
{   
    int m=2,n=2,p=2,q=2,i,j,k,no=1;

   /* printf("\n-->ENTER THE ELIMENT OF 1ST METRIX<--");
    printf("\n========================================\n");

    printf("Enter the value of 1st matrix rows : ");
    scanf("%d",&m);

    printf("Enter the value of 1st matrix colums : ");
    scanf("%d",&n);*/

    int a[m][n];

    printf("-->Enter the eliment of metrix\n");

    //input 1st matrix.
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {   no=1;
            printf("Enter the %dst eliment of 1st matrix : ",no);
            scanf("%d",&a[i][j]);
            no++;
        }
        printf("\n");
    }

  /*  printf("\n-->ENTER THE ELIMENT OF 2ST METRIX<--");
    printf("\n========================================\n");

    printf("Enter the value of 2st matrix rows : ");
    scanf("%d",&p);

    printf("Enter the value of 2st matrix colums : ");
    scanf("%d",&q);*/

    int b[p][q];

    printf("-->Enter the eliment of metrix\n");

    //input 2nd matrix.
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {   no=1;
            printf("Enter the %dst eliment of 2st matrix : ",no);
            scanf("%d",&b[i][j]);
            no++;
        }
        printf("\n");
    }

    // print 1st matrix.
    printf("Your 1st matrix\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {   
            printf("%d ",a[i][j]);
        
        }
        printf("\n");
    }

    // print 1st matrix.
    printf("Your 2st matrix\n");
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {   
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
int result[n][p];

    // check
    if (n!=p)
    {
        printf("\n-->MATRIX CAN NOT POSIBALE BECOUSE COLUMS NOT EQUL TO ROWS.<--");
    }

    // main
    
    else 
    {
        //multipication of matrix .
     //   
        
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {   
               result[n][p]=0;
               for (k=0; k<n; k++)
               {
                    result[i][j]+= a[i][k]*b[k][j];
               } 
            }
            printf("\n");
        }

       //print matrix,
       printf("\n-->YOUR MULTIPICATION OF MATRIX<--");
       printf("\n========================================\n");

        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {   
               printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}