#include<stdio.h>
int main()
{
	int i,j,n,p=0;
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
	if(p==1)
	printf("%d is composite number",n);
	if(p==0)
	printf("%d is prime number",n);
	} 
	return 0;
}
