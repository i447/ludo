#include<stdio.h>
int main()
{
	int m[3][3];
	int i,j;
	printf("Enter 9 elements of the matrix\n");
	for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter the %d row and %d column i.e m[%d][%d]th element ",(i+1),(j+1),i,j);
      scanf("%d",&m[i][j]);
    }
  }
	printf("\nThe matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m[i][j]);
			if(j==2)
      {
        printf("\n");
      }
		}	
	}
	return 0;
}
