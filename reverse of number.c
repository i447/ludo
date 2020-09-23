#include<stdio.h>
int main()
{
	int n,b,a,rev=0;
	printf("Enter a Number ");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		b=a%10;
		rev=(rev*10)+b;
		a=a/10;
	}
	printf("The Reverse of the number %d is %d",n,rev);
    return 0;
}
