#include<stdio.h>
int prime(int,int);
int main()
{
	int a,b,c;
	printf("Enter a positive number to check whether it is prime or not ");
	scanf("%d",&a);
	b=(a/2);
	if(a==1)
		printf("1 is neither prime nor composite");
	else
	{
		c=prime(a,b);
	if(c==1)
	{
		printf("%d is prime no",a);
	}
	if(c==0)
	{
		printf("%d is composite",a);
	}
	}
	return 0;
}
int prime(int x,int y)
{
	int d;
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
