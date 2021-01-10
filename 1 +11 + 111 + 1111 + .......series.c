#include<stdio.h>
#include<math.h>
int main()
{
	int i,j=0,n,sum=0;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("\nThe first %d terms are :-\n",n);
    for(i=0;i<n;i++)
    {
    	j+=pow(10,i);
    	if(i<(n-1))
    	printf("%d + ",j);
    	if(i==(n-1))
    	printf("%d",j);
    	sum+=j;
	}
	printf("\nThe Sum is = %d",sum);
	return 0;
}
