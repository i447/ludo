#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x;
	float a,s=1;
	printf("Series- \nS = 1 + x + (x^2)/2 + (x^3)/3+.........+(x^n)/n");
	printf("\nEnter The Value of x - ");
	scanf("%d",&x);
	printf("\nEnter the value of n ");
	scanf("%d",&n);
	printf("\nThe Number of Terms in Series is %d\n\nThe series is- \n",n+1);
	printf("\n1\n");
    for(i=1;i<=n;i++)
    {
    	a=(pow(x,i))/i;
    	printf("(%d^%d) / %d = %f\n",x,i,i,a);
    	s+=a;
	}
	printf("\nSum is S= %f",s);
	return 0;
}
