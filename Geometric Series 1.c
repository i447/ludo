#include<stdio.h>
#include<math.h>
int main()
{
	float a,r,b,j;
	int n,i;
	printf("This is a Geometric Series");
	printf("\nEnter the First Term (only positive term or decimal no) ");
	scanf("%f",&a);
	printf("Enter the common ratio (only positive term or decimal no) ");
	scanf("%f",&r);
	printf("Enter the no of terms ");
	scanf("%d",&n);
	j=0;
	for(i=0;i<=(n-1);i++)
	{
		b=a*(pow(r,i));
		printf("%f\n",b);
		j+=b;
	}
	printf("\nThe sum of all the terms, S= %f",j);
	return 0;
}
