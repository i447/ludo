#include<stdio.h>
int sumofdigit();
int main()
{
	int a,b;
	printf("Enter a Number ");
	scanf("%d",&a);
	b=sumofdigit(a);
	printf("The sum of the digits is %d",b);
	return 0;	
}
int sumofdigit(int x)
{
	int y,z;
	if(x==0)
		return 0;
	else
	{
		y=x%10;
		return (y+sumofdigit(x/10));
	}
} 
