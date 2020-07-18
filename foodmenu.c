#include<stdio.h>
int main()
{
  int ch;
  printf("Food Menu\n1. Pizza, Rs 239\n2. Burger, Rs 129\n3. Pasta, Rs 179\n4. French Fries, Rs 99\n5. Sandwich, Rs 149");
  printf("\nEnter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
      case 1:
      printf("Your choice is Pizza, Rs 239");
      break;
      case 2:
      printf("Your choice is Burger, Rs 129");
      break;
      case 3:
      printf("Your choice is Pasta, Rs 179");
      break;
      case 4:
      printf("Your choice is French Fries, Rs 99");
      break;
      case 5:
      printf("Your choice is Sandwich, Rs 149");
      break;
      default:
      printf("Invalid choice");
   }
  return 0;
}
