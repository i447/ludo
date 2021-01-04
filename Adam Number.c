#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,k,m,l,p,sum=0,count=0;
printf("Enter the number ");
scanf("%d",&n);
i=n;
while(i!=0)
{
	m=i%10;
	count++;
	i=i/10;
}
k=n;
while(k!=0)
{
	j=k%10;
	sum+=j*(pow(10,count-1));
	count=count-1;
	k=k/10;
}
p=sum*sum;
l=n*n;
i=l;
count=0,m=0;
while(i!=0)
{
	m=i%10;
	count++;
	i=i/10;
}
k=l;
sum=0;
while(k!=0)
{
	j=k%10;
	sum+=j*(pow(10,count-1));
	count=count-1;
	k=k/10;
}
if(sum==p)
{
	printf("%d is Adam Number",n);
}
else
{
	printf("%d is Not an Adam Number",n);
}
	return 0;
}
