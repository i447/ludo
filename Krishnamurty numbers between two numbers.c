#include<stdio.h>
int main()
{
int i,n,j,k,a,b,c,d,p,fact=1,sum=0;
printf("Enter The Number(interval) ");
scanf("%d%d",&a,&b);
c=a<b?a:b;
d=a>b?a:b;
printf("\nKrishnamurty Numbers between %d and %d are\n",c,d);
for(p=c;p<=d;p++)
{
	k=p;
	while(k!=0)
{
	j=k%10;
	for(i=j;i>=1;i--)
{
	fact*=i;
}
    sum+=fact;
    k=k/10;
    fact=1;
}
    if(sum==p)
    printf("%d\n",p);
    fact=1;
    sum=0;
}
	return 0;
}
