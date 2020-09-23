#include<stdio.h>
int main()
{
	int n,b,a,count=0;
	printf("Enter a Number ");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		b=a%10;
		count++;
		a=a/10;
	}
    printf("The number %d has %d digits",n,count);
    return 0;
}
