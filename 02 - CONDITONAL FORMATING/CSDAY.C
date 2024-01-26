#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n =============================================");

	printf(" \n\n 1) S & s : SUNDAY .\n\n 2) M & m : MONDAY .\n\n 3) T & t : TUSEDAY .\n\n 4) W & w : WENSDAY .\n\n 5) H & h : THUSEDAY .\n\n 6) F & h : FRIYDAY .\n\n 7) E & e : SETRDAYDAY .");

	printf("\n\n =============================================");

	printf(" \n\n ==> ENTER YOUR CHOICE : ");
	scanf("%c",& ch);
	printf("\n =============================================");

	if (ch=='s' || ch=='S')
	   {
	     printf("\n\n ==> YOU ARE SELECT SUNDAY ");
	   }

	if (ch=='m' || ch=='M')
	   {
	     printf("\n\n ==> YOU ARE SELECT MONDAY ");
	   }

	if (ch=='T' || ch=='t')
	   {
	     printf("\n\n ==> YOU ARE SELECT TUSEDAY ");
	   }

	if (ch=='W' || ch=='w')
	   {
	     printf("\n\n ==> YOU ARE SELECT WENSDAY ");
	   }

	if (ch=='H' || ch=='h')
	   {
	     printf("\n\n ==> YOU ARE SELECT THUSESDAY ");
	   }

	if (ch=='F' || ch=='f')
	   {
	     printf("\n\n ==> YOU ARE SELECT FRIYDAY ");
	   }

	if (ch=='E' || ch=='e')
	   {
	     printf("\n\n ==> YOU ARE SELECT SATERDAY ");
	   }

	getch();
}