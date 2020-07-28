#include<stdio.h>
int main()
{
	int a,s,q,sum=0;
	printf("Enter a Number ");
	scanf("%d",&a);
	do
	{
		s=a%10;
		sum=(sum+s);
	    a=(a/10);	
	}
	while(a>0);
	printf("The sum of the digits is %d",sum);
	return 0;	
}
