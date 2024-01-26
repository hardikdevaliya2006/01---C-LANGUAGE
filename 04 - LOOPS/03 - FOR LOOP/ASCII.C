#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	for (i=65;i<=90;i++)
	{
		char ch=(char)i;
		printf("%c -> ",ch);
		printf("%d.",i);
	}
	getch();
}