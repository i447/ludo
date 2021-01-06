#include<stdio.h>
int main()
{
	int i,j,n,m,sum=0;
	printf("Enter a Positive Integer ");
	scanf("%d",&n);
	i=n;
	while(i!=0)
	{
		j=i%10;
		sum+=j;
		i=i/10;
	}
    m=n%sum;
    if(m==0)
    printf("%d is Harshad/Niven number",n);
    else
    printf("%d is not Harshad/Niven number",n);
	return 0;
}
