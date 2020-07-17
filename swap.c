#include<stdio.h>
int main()
{
   int p,q;
   printf("Enter two numbers");
   scanf("%d%d",&p,&q);
   printf("Before Swapping x=%d & y=%d",p,q);
   p=p+q;
   q=p-q;
   p=p-q;
   printf("\nAfter swapping x=%d & y=%d",p,q);
   return 0;
}
