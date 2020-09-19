#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("The no of rows you want");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
    	for(k=1;k<=(2*n-(2*i-1));k++)
		    {
			    printf("5");
		    }
		printf("\n");
	}
	return 0;
}
