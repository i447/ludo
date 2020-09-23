#include<stdio.h>
#include<math.h>
int main()
{
	int n,b,a,count=0,c,sum=0,num,d;
	printf("Enter a Number ");
	scanf("%d",&n);
	a=n;
	d=n;
	while(a!=0)
	{
		b=a%10;
		count++;
		a=a/10;
	}
    printf("The number %d has %d digits\n",n,count);
    while(d!=0)
    {
    	c=d%10;
    	num=pow(c,count);
    	sum+=num;
    	d=d/10;
	}
    if(n==sum)
    printf("%d is Narcissistic Number",n);
    else
    printf("%d is Not a Narcissistic Number",n);
    return 0;
}
