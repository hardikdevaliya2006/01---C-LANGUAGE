#include<stdio.h>
#include<conio.h>

void main()

{       int n,i,a=100;
	clrscr();

	printf("\n Enter the trem : ");
	scanf("%d",&n);
	n=a;
	printf(" AP =");
	for(i=1;a>0;i++)
	{
		printf(" %d,",a);
		a=a-2;
	}
	getch();

}