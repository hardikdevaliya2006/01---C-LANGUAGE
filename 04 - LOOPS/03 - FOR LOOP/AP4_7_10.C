#include<stdio.h>
#include<conio.h>

void main()

{       int i,a=4,n;
	clrscr();

	printf("\n Enter the trem : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("AP = %d,",a);
		a=a+3;
	}
	getch();

}