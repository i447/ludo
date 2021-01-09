#include<stdio.h>
int main()
{
	int i=0,j,n,m;
	printf("Enter a number ");
	scanf("%d",&n);
	m=n;
    while(m!=0)
    {
    	j=m%10;
    	if(j==0)
    	{
    		i=1;
    		break;
		}
		m=m/10;
	}
	if(i==1)
	printf("%d is a Duck Number",n);
	else
	printf("%d is not a Duck Number",n);
	return 0;
}
