#include<stdio.h>
#include<conio.h>

void main()

{       int i,no=1,n;
	clrscr();

	printf("\n Enter the table no. : ");
	scanf("%d",&n);

	for (i=n;i<=n*10;i=i+n)
	{
		printf("\n %d * %d = %d. ",n,no,i);
		no++;
	}
	getch();

}