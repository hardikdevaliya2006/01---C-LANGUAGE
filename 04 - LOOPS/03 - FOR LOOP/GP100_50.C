#include<stdio.h>
#include<conio.h>

void main()

{
	float i,n;

	clrscr();

	printf("\n Enter the trem : ");
	scanf("%f",&n);

	printf(" GP = ");
	for(i=n;i>0;i=i/2)
	   {
		printf(" %f,",i);
	   }
	getch();

}