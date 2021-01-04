#include<stdio.h>
int main()
{
int i,j,n,sum=0;
printf("Enter a number to check it is perfect or not ");
scanf("%d",&n);
printf("The divisors of %d (not including the number itself) are\n",n);
for(i=1;i<=n/2;i++)
{
	j=n%i;
	if(j==0)
	{
		printf("%d\n",i);
		sum+=i;
	}	
}
if(sum==n)
{
	printf("The sum of all the divisors of %d is %d.\nTherefore %d is Perfect number.",n,sum,n);
}
if(sum<n)
{
	printf("The sum of all the divisors of %d is %d.\nTherefore %d is Deficient number.",n,sum,n);
}
if(sum>n)
{
	printf("The sum of all the divisors of %d is %d.\nTherefore %d is Abundant number.",n,sum,n);
}
	return 0;
