#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,product=1;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&n);
		for (i=1;i<=n;i++)
		{
			product=product*i;
		}

	printf("\n==>> Which number you gives it's factoral = %d .",product);

	getch();
}
