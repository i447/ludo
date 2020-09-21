#include<stdio.h>
int main()
{
	int n,i;
	long long int a=1;
	printf("\nTo Find Factorial of the Given Number");
	printf("\nEnter the Number ");
	scanf("%d",&n);
	if(n<0)
	printf("Factorial does not Exist");
	else
	{
			for(i=n;i>=1;i--)
	{
		a*=i;
	}
	printf("Factorial of %d is %lld",n,a);
	}
    return 0;
}
