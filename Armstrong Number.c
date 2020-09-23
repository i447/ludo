include<stdio.h>
#include<math.h>
int main()
{
	int n,b,a,sum=0,c;
	printf("Enter a Number ");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		b=a%10;
		c=pow(b,3);
		sum+=c;
		a=a/10;
	}
	if(sum==n)
	printf("%d is a Armstrong number",n);
	else
	printf("%d is Not a Armstrong number",n);
    return 0;
}
