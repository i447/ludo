#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,a,b,p,q,sum=0,count=0;
	printf("Enter a number ");
	scanf("%d",&n);
	p=n;
	while(p!=0)
	{
		j=p%10;
		count++;
		p=p/10;
	}
	q=n;
	for(i=count;i>=1;i--)
	{
		a=q%10;
		b=pow(a,i);
		sum+=b;
		q=q/10;
	}
	if(sum==n)
	printf("%d is a Disarium Number",n);
	else
	printf("%d is not a Disarium Number",n);
	return 0;
}
