#include<stdio.h>
struct employee
{
	char name[20];
	int age;
	double phone;
	long int salary;
};
int main()
{
	int i,j;
	char dept[20];
	printf("Enter Department name(Max 20 characters)- ");
	gets(dept);
	printf("Specify the number of Emplyoees of which you want to keep the record ");
	scanf("%d",&j);
	struct employee e[j];
	for(i=0;i<j;i++)
	{
		printf("\nEnter Employee %d details",i+1);
		printf("\nEnter the name of the employee(Maximum 20 characters)- ");
		scanf("%s",e[i].name);
		printf("Enter the age of employee- ");
		scanf("%d",&e[i].age);
		printf("Enter the phone number of employee- ");
		scanf("%lld",&e[i].phone);
		printf("Enter the salary of the employee- ");
		scanf("%ld",&e[i].salary);
	}
	printf("%s",&dept);
	for(i=0;i<j;i++)
	{
		printf("\nEmployee %d details",i+1);
		printf("\nName- %s",e[i].name);
		printf("\nAge is %d",e[i].age);
		printf("\nPhone no- %lld",e[i].phone);
		printf("\nSalary per annum- Rs %ld",e[i].salary);
	}
	return 0;
}
