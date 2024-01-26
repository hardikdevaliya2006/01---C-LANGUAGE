#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b,power=1;
	clrscr();

	printf("\n ENTER THE VALUE OF A : ");
	scanf("%d",& a);
	printf("\n ENTER THE POWER : ");
	scanf("%d",& b);

	for (i=1;i<=b;i++)
	{
		power*=a;
	}
	printf("\n ==>> %d raisd to the power %d is %d.",a,b,power);
	getch();
}