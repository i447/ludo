#include<stdio.h>
int main()
{
	int i,j,n,m,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	m=n;
    while(m!=0)
    {
    	j=m%10;
    	i=factorial(j);
    	sum+=i;
    	m=m/10;
	}
	if(sum==n)
	printf("%d is a Strong Number",n);
	else
	printf("%d is not a Strong Number",n);
	return 0;
}
int factorial(int a)
{
	int b,c=1;
	for(b=1;b<=a;b++)
	{
		c*=b;
	}
	return c;
}
