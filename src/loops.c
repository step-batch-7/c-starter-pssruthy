#include <stdio.h>

long factorial(int);
void fibonacci(int);

long factorial(int number){
  long factorial = 1;
  for(int limit = number; limit > 0; limit--){
    factorial = factorial * limit;
  }
  return factorial;
}

void fibonacci(int count){
  int current_term = 0, next_term=1;

  while(count > 0) {
    printf("%d\n", current_term);
    next_term = current_term + next_term;
    current_term = next_term - current_term;
    count--;
  }
}

int main(void ){

  int choice , number;

  printf("Choose a number \n1. Factorial\n2. Fibonacci\nChoice : ");
  scanf("%d" ,&choice);

  switch (choice)
  {
  case 1:
    printf("\n---Factorail---\n");
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("Factorial : %ld\n", factorial(number));
    break;

  case 2:
    printf("\n---Fibonacci---\n");
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("Fibonacci series : \n");
    fibonacci(number);
    break;
  
  default: printf("Wrong choice");
    break;
  }

  return 0;
}