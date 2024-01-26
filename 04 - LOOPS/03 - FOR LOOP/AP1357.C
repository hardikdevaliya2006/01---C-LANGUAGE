#include<stdio.h>
#include<conio.h>

void main()

{       int i,no=1,n;
	clrscr();

	printf("\n Enter the trem : ");
	scanf("%d",&n);

	for(i=1;i<=n;i=i+2)
	{
		printf("\nAP =  %d,",i);
	}
	getch();

}