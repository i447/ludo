#include<stdio.h>
int main()
{
	int x[3][3],i,j,y=0;
	printf("Enter 9 elements(integers) of the matrix\n");
	for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter the %d row and %d column i.e. x[%d][%d]th element ",i+1,j+1,i,j);
      scanf("%d",*(x+i)+j);
    }
  }
  printf("The matrix is\n");
	for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",*(*(x+i)+j));
      if(j==2)
        printf("\n");
    }
    
  }
  for(i=0;i<3;i++)
  {
      j=i;
      y+=(*(*(x+i)+j));
  }
  printf("The sum of diagonal of elements of the matrix is %d",y);
	return 0;
}

