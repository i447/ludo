#include<stdio.h>
int main()
{
int i,j,n,sum=0;
printf("Enter a number to check it is perfect or not ");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
	j=n%i;
	if(j==0)
	{
		sum+=i;
	}	
}
if(sum==n)
{
	printf("%d is perfect number",n);
}
else
{
	printf("%d is not a perfect number",n);
}
	return 0;
}
