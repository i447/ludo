#include<stdio.h>
int main()
{
	int i,j,n,m,a,b,c,p=0,q=0;
	printf("Enter a number ");
	scanf("%d",&n);
	if(n==1)
	printf("1 is neither prime nor composite");
	else
	{
		for(i=2;i<=n/2;i++)
    {
        j=n%i;
        if(j==0)
        {
            p=1;
        	break;
		}
		}
		if(p==0)
		printf("%d is a Prime Number",n);
		else
		printf("%d is Not a prime number.It is a Composite Number",n);
	}	
	a=n;
		while(a!=0)
		{
			m=a%10;
		    b=10*b+m;
		    a=a/10;
		}
		printf("\nThe reverse of %d is %d",n,b);
		if(b==1)
		printf("\n1 is neither prime nor composite.\nSo, %d is not an Emirp number",n,b,n);
		else
		{
		for(i=2;i<=b/2;i++)
   {
        j=b%i;
        if(j==0)
        {
            q=1;
        	break;
		}
	}
	if(q==0)
		printf("\n%d is a Prime Number",b);
		else
		printf("\n%d is Not a prime number.It is a Composite Number",b);
	if(p==0&&q==0)
	printf("\nSo, %d is an Emirp Number",n);
	else
	printf("\nSo, %d is not an Emirp Number",n);
	     }
	return 0;
}
