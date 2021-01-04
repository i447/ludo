#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,m,p,k,l,a,b,c,d,count=0,sum=0;
	printf("Enter 2 numbers(intervals) ");
	scanf("%d%d",&a,&b);
	c=a>b?a:b;
	d=a<b?a:b;
	printf("The Armstrong Numbers between %d and %d are:-\n",d,c);
	for(p=d+1;p<c;p++)
	{
		i=p;
		while(i!=0)
	{
		k=i%10;
		count++;
		i=i/10;
	}
	m=p;
	while(m!=0)
	{
		j=m%10;
		l=pow(j,count);
		sum+=l;
		m=m/10;
	}
	if(sum==p)
	{
		printf("%d\n",p);
	}
	sum=0;
	count=0;
	}
	return 0;
}
