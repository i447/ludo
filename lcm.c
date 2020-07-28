#include<stdio.h>
int main()
{
	int a,b,i=1,e,f;
	printf("Enter two numbers whose LCM is to be found ");
	scanf("%d%d",&a,&b);
	int c=(a>b)?a:b;
	int d=(a<b)?a:b;
	while(1)
	{
		e=(c*i);
		f=(e%d);
		if(f==0)
		{
			printf("LCM of %d and %d is %d",a,b,e);
			break;
		}
		else
			i++;
	}
    return 0;
}
