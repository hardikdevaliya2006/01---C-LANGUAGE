#include<stdio.h>
#include<conio.h>

void main()

{       int i,a=1,n;
	clrscr();

	printf("\n Enter the trem : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n AP = %d,",a);
		a=a*2;
	}
	getch();

}