#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,ch;
	clrscr();

	printf("\n::PROGRAME FOR MADE A CALCULATOR::");
	printf("\n ============================================");
	do
	{

		printf("\n ENTER THE VALU OF N1 : ");
		scanf("%d",&n1);
		printf("\n ENTER THE VALU OF N2 : ");
		scanf("%d",&n2);
		printf("\n ENTER THE OPRETOR : ");
		scanf("%d",&ch);
		printf("\n ============================================");
		switch(ch)
		{
			case 1 :
				printf("\n YOUR ADDITION = %d",n1+n2);
				break;
			case 2 :
				printf("\n YOUR SUSCARCT = %d",n1-n2);
				break;
			case 3 :
				printf("\n YOUR MULTIPICATION = %d",n1*n2);
				break;
			case 4 :
				printf("\n YOUR DIVISON = %d",n1/n2);
				break;
			case 5 :
				printf("\n YOUR MODUAL = %d",n1%n2);
				break;
			case 0 :
				printf("\n ARE YOU EXIT ?? ");
				break;
			default:
				printf("\n enter proper");
				break;


		}
	}while(ch!=0);
	getch();
}