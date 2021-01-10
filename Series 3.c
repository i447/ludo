#include<stdio.h>
int main()
{
	int i,j,k,n;
	float a,b,c,s=0;
	printf("Series- \nS = 2/5 + 5/9 + 8/13............");
	printf("\nEnter the no of Terms ");
	scanf("%d",&n);
	printf("\n The Terms are:-\n");
    for(i=1;i<=n;i++)
    {
    	for(j=2;j<=2+(3*(i-1));j+=3)
    	{
    		a=j;
		}
		for(k=5;k<=5+(4*(i-1));k+=4)
		{
			b=k;
		}
		c=a/b;
		printf("%f / %f = %f\n",a,b,c);
		s+=c;
	}
	printf("\nSum is Q= %f",s);
    return 0;
}
