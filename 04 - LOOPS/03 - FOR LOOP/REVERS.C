#include<stdio.h>
#include<conio.h>
void main()
{
	int n,revers=0;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&n);

	while(n>0)
	{
	  revers=revers*10;
	  revers=revers+(n%10);
	  n=n/10;

	}
	printf("\==>> Which number you gives it's revesed = %d .",revers);

	getch();
}