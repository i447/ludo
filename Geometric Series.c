#include<stdio.h>
#include<math.h>
int main()
{
	int a,r,i,b,j,n;
	printf("This is a Geometric Series");
	printf("\nEnter the First Term (only positive term no fractional or decimal no) ");
	scanf("%d",&a);
	printf("Enter the common ratio (only positive term no fractional or decimal no) ");
	scanf("%d",&r);
	printf("Enter the no of terms ");
	scanf("%d",&n);
	j=0;
	for(i=0;i<=(n-1);i++)
	{
		b=a*(pow(r,i));
		printf("%d\t",b);
		j+=b;
	}
	printf("\nThe sum of all the terms, S= %d",j);
	return 0;
}
