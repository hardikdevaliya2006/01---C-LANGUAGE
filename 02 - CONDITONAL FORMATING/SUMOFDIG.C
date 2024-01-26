#include <stdio.h>
#include <conio.h>
void main()
{
	int num,sum,i,rem,t;
	clrscr();
	printf("\n enter num:");
	scanf("%d",&num);
	sum=0;
	t=num;
	if(t>0)
	{
		i=t%10;
		sum=sum+i;
		t=t/10;

	}
	if(t>0)
	{

		i=t%10;
		sum=sum+i;
		t=t/10;

	}
	if(t>0)
	{

		i=t%10;
		sum=sum+i;
		t=t/10;
	}
	if(t>0)
	{

		i=t%10;
		sum=sum+i;
		t=t/10;

	}
	printf("\n sum of digit of number is %d",sum);
	getch();


}