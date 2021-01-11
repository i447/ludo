#include<stdio.h>
int main()
{
	int i,j,n;
	printf("C program to show Multiplication Table Vertically from 1 to n\nEnter the value of n : ");
	scanf("%d",&n);
	printf("Multiplication table from 1 to %d\n",n);
    for(i=1;i<=10;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		if(j<=n-1)
			printf("%d*%d=%d, ",j,i,i*j);
			else
			printf("%d*%d=%d",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}
