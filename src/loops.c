#include <stdio.h>

long factorial(int);

long factorial(int number){
  long factorial = 1;
  for(int limit = number; limit > 0; limit--){
    factorial = factorial * limit;
  }
  return factorial;
}

int main(void ){

  int choice , number;

  printf("Choose a number \n1. Factorial\n");
  scanf("%d" ,&choice);

  switch (choice)
  {
  case 1:
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("Factorial : %ld\n", factorial(number));
    break;
  
  default: printf("Wrong choice");
    break;
  }

  return 0;
}