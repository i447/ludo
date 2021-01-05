#include<stdio.h>
int main()
{
	int i,j,n,a,sum=0;
	printf("Enter a Positive Integer ");
	scanf("%d",&n);
	j=n*n;
	i=j;
	while(i!=0)
	{
		a=i%10;
		sum+=a;
		i=i/10;
	}
	printf("Square of %d is %d\n",n,j);	
	printf("The sum of digits in number %d is %d\n",j,sum);
	if(sum==n)
	printf("So %d is a Neon number",n);
	else
	printf("So %d is not a Neon number",n);
	return 0;
}
