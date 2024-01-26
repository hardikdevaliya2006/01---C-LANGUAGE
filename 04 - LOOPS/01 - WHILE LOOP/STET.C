/* ENTRY CONTROAL LOOP */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=0;
	clrscr();

	printf("\n\n ENTER TREM OF N :==>> ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("\n \n I = %d",i);
		i++;
	}
	getch();
}