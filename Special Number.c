#include<stdio.h>
int main()
{
	int i,j,n,p,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	p=n;
	while(p!=0)
	{
		i=p%10;
		j=fact(i);
		sum+=j;
		p=p/10;
	}
	if(sum==n)
	{
		printf("%d is a Special Number",n);
	}
	else
	{
		printf("%d is not a Special Number",n);
	}
	
	return 0;
}
int fact(int i)
	{
		int a=1,k;
		for(k=1;k<=i;k++)
		{
			a*=k;
		}
		return a;
	}
