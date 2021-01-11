#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("Enter the number of Rows : ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		sum++;
    		printf("%d\t",sum);
		}
		printf("\n");
	}
	return 0;
}
