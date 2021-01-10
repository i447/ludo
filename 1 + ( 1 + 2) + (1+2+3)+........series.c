#include<stdio.h>
int main()
{
	int i,j,a=0,s=0,n,b;
	printf("Series- \nS = 1 + ( 1 + 2) + (1+2+3)+............+(1+2+3+4+.....+20)");
	printf("\nEnter the no of Terms ");
	scanf("%d",&n);
	printf("\n The Terms are:-\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
    {
    	b=j;
    	s+=b;	
	}
	printf("%d\n",s);
	a+=s;
	s=0;
    }
	printf("\nSum is S= %d",a);
    return 0;
}
