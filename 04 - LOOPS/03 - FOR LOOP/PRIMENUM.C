#include<stdio.h>
#include<conio.h>

void main()

{       int i,n;
	clrscr();

	printf("\n Enter the num : ");
	scanf("%d",&n);

	for(i=2;i<=n;i++)
	{
		if (n%i==0)
		{
			printf("\n==> %d is prime number",n);
			break;
		}
		else
		{
			printf("\n==> %d is not prime number",n);
			break;
		}
	}
	getch();

}