#include<stdio.h>
int main()
{
	int a,i,s=0,n;
	printf("Series- \nP= (1*2) + (2 *3) + (3* 4)+……(8 *9) +(9 *10)");
	printf("\nEnter the no of terms of the series ");
	scanf("%d",&n);
	printf("\nThe series is- \n");
    for(i=1;i<=n;i++)
    {
    	a=i*(i+1);
    	printf("\n%d\t*\t%d\t=\t%d\n",i,i+1,a);
    	s+=a;
	}
	printf("Sum is P= %d",s);
	return 0;
}
