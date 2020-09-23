#include<stdio.h>
int main()
{
	int n,b,a,rev=0;
	printf("Enter a Number ");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		b=a%10;
		rev=(rev*10)+b;
		a=a/10;
	}
	if(rev==n)
	printf("%d is a Palindrome number",n);
	else
	printf("%d is Not a Palindrome number",n);
    return 0;
}
