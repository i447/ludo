#include<stdio.h>
#include<math.h>
int main()
{
	int j,n,a,sum=0;
	float i;
	printf("Enter a number ");
	scanf("%d",&n);
	i=sqrt((double)n);
	j=i;
	if(j==i)
	{
		printf("%d is a square number\n",n);
	}
	else
	{
		printf("%d is not a square number\n",n);
	}
	for(a=1;a<=n;a++)
	{
		sum+=a;
		if(sum==n)
		{
			printf("%d is a Triangular Number",n);
			break;
		}
		if(sum>n)
		{
			printf("%d is Not a Triangular Number",n);
			break;
		}
	}
	return 0;
}
