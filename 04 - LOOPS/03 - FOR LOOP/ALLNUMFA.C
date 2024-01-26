#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,product=1;
	
	printf("\n Enter any number : ");
	scanf("%d",&n);
		for (i=1;i<=n;i++)
		{
			product=product*i;
			printf("\n ==>> %d number's factoral = %d .",i,product);
		}
	getch();
}
