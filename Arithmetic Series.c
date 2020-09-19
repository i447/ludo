#include<stdio.h>
int main()
{
	int i,j,n,d,a,b;
	printf("This is an Arithmetic series\nEnter the starting term, a= ");
	scanf("%d",&a);
	printf("\nEnter the common difference as in arithmetc series, d= ");
	scanf("%d",&d);
	printf("\nEnter the no of terms you want in series, n= ");
	scanf("%d",&n);
	j=0;
	for(i=1;i<=n;i++)
	{
		b=a+(i-1)*d;
		printf("%d\t",b);
		j+=b;
	}
	printf("\nThe sum of all terms in the series, S= %d",j);
	return 0;
}
