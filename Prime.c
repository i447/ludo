#include<stdio.h>
int prime(int,int);
int main()
{
	int a,b,c;
	printf("Enter a positive number to check whether it is prime or not ");
	scanf("%d",&a);
	b=(a/2);
	c=prime(a,b);
	if(c==1)
	{
		printf("%d is prime no",a);
	}
	if(c==0)
	{
		printf("%d is composite",a);
	}
	if(c==2)
	{
		printf("%d is neither prime nor composite",a);
	}
	return 0;
}
int prime(int x,int y)
{
	int d;
	if(x==1)
		return 2;
	else
	{
		if(y==1)
		return 1;
	else
	{
		d=x%y;
		if(d==0)
			return 0;
		else
			prime(x,y-1);
	}
	}
}
