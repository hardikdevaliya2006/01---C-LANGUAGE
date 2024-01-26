#include<stdio.h>
#include<conio.h>
void main()
{
		 int rem,sum=0,n,i;
		 clrscr();

		 printf("\n enter the number ");
		 scanf("%d",&n);

		 for(i=n;i>0;i=i/10)
		 {
				rem=i%10;
				sum+=rem;
				n/=10;
		 }
			printf("\n %d",sum);
			getch();

}