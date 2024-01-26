#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();

	printf("\n ENTER ANY POSITIVE AND NEGITIVE NUMBER :-->> ");
	scanf("%d",&n);

	switch(n>0)
	{
	 case 1 : printf("\n YOU ENTERED POSITIVE INTEGER .");
		  break;
	 case 0 : switch(n<0)
		  {
		   case 1 :  printf("\n YOU ENTERED NEGTIVE INTEGER .");
			     break;
		   case 0 :  printf("\n ZERO ");
		  }
	}
	getch();
}