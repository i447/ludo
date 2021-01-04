#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,k,m,sum=0,count=0;
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
printf("The Reverse of %d is %d",n,sum);
	return 0;
}
