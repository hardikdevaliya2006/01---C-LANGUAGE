#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();

	// odd numbers -> add
	// even nubers -> subscarct

	printf("\n Enter any number : ");
	scanf("%d",&n);
		for (i=1;i>=n;i++)
		{
			if(i%2!=0)
				sum=sum+i;
			else
				sum=sum-i;
		}

	printf("\n==>> Which number you gives it's sum = %d .",sum);

	getch();
}
