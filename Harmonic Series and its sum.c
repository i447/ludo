#include<stdio.h>
int main()
{
	int i,n;
	float j,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	printf("\nThe Sum of first %d terms of the series :-\n",n);
    for(i=1;i<=n;i++)
    {
    	j=1/(float)i;
    	if(i<n)
    	printf("1/%d + ",i);
    	if(i==n)
    	printf("1/%d ",i);
    	sum+=j;
	}
	printf("\nSum of series upto %d terms = %f",n,sum);
	return 0;
}
