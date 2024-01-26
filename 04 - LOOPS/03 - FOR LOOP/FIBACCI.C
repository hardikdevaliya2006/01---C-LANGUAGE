#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a=1,b=1,sum=1;
	clrscr();

	printf("\n ENTER THE NOMBURE :: ");
	scanf("%d",& n);

	for (i=1;i<=n-2;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
	}

	printf("\n ==>> The %dth fibonacci serise = %d",n,sum);
	getch();
}