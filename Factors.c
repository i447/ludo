#include<stdio.h>
int main()
{
	int n,i,a,b;
	printf("Enter a Number ");
	scanf("%d",&n);
	printf("\n The Factors/Divisors of %d are:-\n",n);
	a=n;
	for(i=1;i<=n;i++)
	{
		b=a%i;
		if(b==0)
		{
			printf("%d\n",i);
		}	
	}
	return 0;
}
