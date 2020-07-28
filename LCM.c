#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b,e;
	printf("Enter two numbers whose LCM is to be found ");
	scanf("%d%d",&a,&b);
	int c=(a>b)?a:b;
	int d=(a<b)?a:b;
	e=lcm(c,d);
	printf("LCM of %d and %d is %d",a,b,e);
	return 0;
}
int lcm(int x,int y)
{
	int i=1;
	if((x*i)%y==0)
		return (x*i);
	else
	{
		lcm((x*(i+1)),y);
	}
}
