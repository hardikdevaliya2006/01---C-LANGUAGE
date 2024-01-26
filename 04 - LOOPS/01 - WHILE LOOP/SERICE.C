#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();

	printf("\n ENTER THE TREM : ");
	scanf("%d",&n);

	i=2;

	while(i<=n)
	{
		printf("\n %d ",i);
	       i=i+2;
	}


	getch();
}
