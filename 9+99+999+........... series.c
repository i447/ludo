#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j=0,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	printf("\nThe first %d terms of the series are :-\n",n);
    for(i=0;i<n;i++)
    {
    	j+=9*(pow(10,i));
    	if(i<n-1)
    	printf("%d + ",j);
    	if(i==n-1)
    	printf("%d ",j);
    	sum+=j;
	}
	printf("\nSum of series upto %d terms = %d",n,sum);
	return 0;
}
