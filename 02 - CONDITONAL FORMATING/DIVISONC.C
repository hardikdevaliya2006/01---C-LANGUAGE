#include<stdio.h>
#include<conio.h>

void main()
{
	int c,fco,hoi,math,office,english,prectical;
	float total,pre;

	clrscr();
	printf("           < MARK SHEET >\n");
	printf(" ======================================\n");

	printf(" \n Enter c subject marks         :-> ");
	scanf("%d",& c);

	printf(" Enter fco subject marks       :-> ");
	scanf("%d",& fco);

	printf(" Enter hoi subject marks       :-> ");
	scanf("%d",& hoi);

	printf(" Enter math subject marks      :-> ");
	scanf("%d",& math);

	printf(" Enter office subject marks    :-> ");
	scanf("%d",& office);

	printf(" Enter english subject marks   :-> ");
	scanf("%d",& english);

	printf(" Enter prectical subject marks :-> ");
	scanf("%d",& prectical);

	printf("\n ======================================\n");

	total=c+fco+hoi+math+office+english+prectical;

	printf("\n -> Your 7 subject total = %f",total);

	printf("\n\n ======================================\n");

	pre=total/7;

	if (c>40 && fco>40 && hoi>40 && math>40 && office>40 && english>40 && prectical>40 )

	     {
			printf(" \n -> Your pre = %f",pre);

			printf("\n\n ======================================\n");

		if      (pre>=70)
			{
			  printf(" \n -> You are get 1st class! ");
			}
		else if (pre>=60 && pre<70)
			{
			  printf(" \n -> You are get 2nd class! ");
			}
		else if (pre>=50 && pre<60)
			{
			  printf(" \n -> You are get 3rd class! ");
			}
		else if (pre>=40 && pre<50)
			{
			  printf(" \n -> You are get 4th class! ");
			}

		printf("\n\n ======================================\n");
	     }
	else
	     {
		 printf("\n you are fail! ");
		 printf("\n\n ======================================\n");
	     }
	     }
	getch();
}