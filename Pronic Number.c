#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		j=i*(i+1);
		if(j==n)
		{
			printf("%d is a Pronic Number",n);
			break;
		}
		if(j>n)
		{
			printf("%d is not a Pronic Number",n);
			break;
		}
	}
	return 0;
}
