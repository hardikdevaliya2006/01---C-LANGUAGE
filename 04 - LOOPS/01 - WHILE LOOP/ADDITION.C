#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();

	printf("\n ENTER THE TREM : ");
	scanf("%d",&n);

	i=1;

	while(i<=n)
	{
	      if(i<n)
	      {
		printf("%d+",i);
	      }
	      else
	      {
	       printf("%d",i);
	      }
		sum=sum+i;
		i++;
	}
	printf("\n SUM OF DIGET :==>> %d",sum);

	getch();
}
