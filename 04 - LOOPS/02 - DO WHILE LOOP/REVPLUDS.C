#include<stdio.h>
int main()
{
	int i,n,revers=0,rem,sum=0,mainsum,b,a;
	
	printf("\n Enter any number : ");
	scanf("%d",&n);


		for (i=a;i>0;i=i/10)
		{
			rem=i%10;
			sum+=rem;
			a/=10;
		}
	
	("\n==>> Which number you gives it's sum = %d .",sum);
				while(b>0)
		{
			revers=revers*10;
			revers=revers+(b%10);
			b=b/10;
	    }

	mainsum=sum+revers;

	printf("\n==>> Which number you give it's revesed = %d .",revers);

	printf("\n==>> Revers number and sum of nuber is  = %d .",mainsum);

	return 0;
}