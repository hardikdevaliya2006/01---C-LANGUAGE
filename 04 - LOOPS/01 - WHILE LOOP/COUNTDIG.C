#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count = 0;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&n);

	while(n!=0)
	{
	  n=n/10;
	  count++;
	}
	printf("\==>> Which nombur you gives in total %d number available .",n,count);

	getch();
}