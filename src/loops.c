#include <stdio.h>

long factorial(int);
void print_fibonacci(int);
void print_odd_number_series(long);
void print_even_number_series(long);
void print_multiplication_table(long, long);

long factorial(int number){
  long factorial = 1;
  for(int limit = number; limit > 0; limit--){
    factorial = factorial * limit;
  }
  return factorial;
}

void print_fibonacci(int count){
  int current_term = 0, next_term=1;

  while(count > 0) {
    printf("%d\n", current_term);
    next_term = current_term + next_term;
    current_term = next_term - current_term;
    count--;
  }
}

void print_odd_number_series(long limit){
  long odd_number = 1;
  while(odd_number < limit){
    printf("%ld\n", odd_number);
    odd_number = odd_number + 2;
  }
}

void print_even_number_series(long limit){
  long even_number = 2;
  while(even_number < limit){
    printf("%ld\n", even_number);
    even_number = even_number + 2;
  }
}

void print_multiplication_table(long number, long limit){
  for (long count = 1; count <= limit; count++) 
  {
    printf("%ld * %ld = %ld\n", count, number, count * number);
  }
}


int main(void ){

  int choice , number;
  long limit;

  printf("Choose a number \n1. Factorial\n2. Fibonacci\n3. Odd number series\n4. Even number series\n5. Multiplicaton table\nChoice : ");
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
    print_fibonacci(number);
    break;

  case 3:
    printf("\n---Odd Number Series---\n");
    printf("Enter the limit : ");
    scanf("%ld", &limit);
    printf("Odd Number Series : \n");
    print_odd_number_series(limit);
    break;

    case 4:
    printf("\n---Even Number Series---\n");
    printf("Enter the limit : ");
    scanf("%ld", &limit);
    printf("Even Number Series : \n");
    print_even_number_series(limit);
    break;

    case 5:
    printf("\n---Multiplication table---\n");
    printf("Enter the number : ");
    long num,count;
    scanf("%ld", &num);
    printf("Enter the count : ");
    scanf("%ld", &count);
    printf("Even Number Series : \n");
    print_multiplication_table(num,count);
    break;
  
  default: printf("Wrong choice");
    break;
  }

  return 0;
}