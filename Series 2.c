#include<stdio.h>
int main()
{
	int i,n;
	float a,b,s=0;
	printf("Series- \nQ= 1/2 + 3/4 +5/6 +............");
	printf("\nEnter the no of Terms ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	b=2*i;
		a=((b-1)/b);
    	printf("%f / %f = %f\n",b-1,b,a);
    	s+=a;
	}
	printf("\nSum is Q= %f",s);
    return 0;
}
