#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("Enter a number ");
	scanf("%d%d",&m,&n);
    i=sumofperfectdivisors(m);
    j=sumofperfectdivisors(n);
    printf("\nThe sum of all the perfect divisors of %d is %d",m,i);
    printf("\nThe sum of all the perfect divisors of %d is %d",n,j);
    if(i==n&&j==m)
    printf("\n%d and %d are Amicable Number",m,n);
    else
    printf("\n%d and %d are Not Amicable Number",m,n);
	return 0;
}
int sumofperfectdivisors(int a)
{
	int b,c,add=0;
	for(b=1;b<a;b++)
	{
		c=a%b;
		if(c==0)
		{
			add+=b;
		}
	}
	return add;
}
