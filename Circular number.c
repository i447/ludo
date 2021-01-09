#include<stdio.h>
int main()
{
	int i=0,j,n,m;
	printf("Enter a number ");
	scanf("%d",&n);
    	j=n%10;
    	if(j==0||j==1||j==5||j==6)
    	{
    		i=1;
		}
	if(i==1)
	printf("%d is a Circular Number",n);
	else
	printf("%d is not a Circular Number",n);
	return 0;
}
