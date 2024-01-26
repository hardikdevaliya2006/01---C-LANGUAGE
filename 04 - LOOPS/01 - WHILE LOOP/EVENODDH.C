#include<stdio.h>
#include<conio.h>
void main()
{
	int no=1,rem=1,count=0,even=1;
	clrscr();

	printf("\n ENTER THE TREM : ");
	scanf("%d",&no);


	while(no>0)
	{
	     rem=no%10;

		if(rem%2==1)
		{
			count++;
		}
		else
		{
			even=even*rem;
		}
		no=no/10;
       }


	printf("\n YOUR COUNTER IS =%d",count);

	printf("\n YOUR MULTIPICATION =%d",even);
	getch();


}