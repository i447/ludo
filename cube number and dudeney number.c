#include<stdio.h>
int main()
{
	int i,j,n,m,p,a,sum=0;
	printf("Enter a Positive Integer ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i*i*i;
		if(j==n)
	    {
	        printf("%d is a cube number\n",n);
	        a=i;
	        break;
        }
		if(j>n)
		{
			printf("%d is not a cube number\n",n);
			break;
		}		
   }
   p=n;
   while(p!=0)
   {
   	m=p%10;
   	sum+=m;
   	p=p/10;
   }
   if(sum==a)
   {
   	printf("%d is a Dudeney Number",n);
   }
   else
   {
   	printf("%d is not a Dudeney Number",n);
   }
	return 0;
