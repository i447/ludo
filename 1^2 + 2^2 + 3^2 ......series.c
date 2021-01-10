#include<stdio.h>
int main()
{
	int a,i,s=0,n;
	printf("series- \nS = 1^2 + 2^2 + 3^2 ......... +N^2");
	printf("\nEnter the no of terms of the series ");
	scanf("%d",&n);
	printf("\nThe series is- \n");
    for(i=1;i<=n;i++)
    {
    	a=i*i;
    	printf("%d^2=%d\n",i,a);
    	s+=a;
	}
	printf("\nSum is S= %d",s);
	return 0;
}
