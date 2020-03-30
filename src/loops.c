#include <stdio.h>

long factorial(int);
void print_fibonacci(int);
void print_odd_number_series(long);
void print_even_number_series(long);
void print_multiplication_table(long, long);
long get_sum_of_N_numbers(long ,long );
long get_product_of_N_numbers(long ,long );
void print_odd_series_between_two(long ,long );
void print_Nth_number_between_two(long ,long,long );

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

long get_sum_of_N_numbers(long start,long end){
  long sum = 0;
  for (long count = start; count <= end; count++)
  {
    sum = sum + count;
  }
  return sum;
}

long get_product_of_N_numbers(long start,long end){
  long product = 1;
  for (long count = start; count <= end; count++){
    product = product * count;
  }
  return product;
}

void print_odd_series_between_two(long start, long end){
  long first_odd = start + !(start % 2);
  for (long count = first_odd; count <= end; count+= 2){
    printf("%ld\n", count);  
  }
}

void print_Nth_number_between_two(long start, long end, long incrementor){
  for (long count = start; count <= end; count+= incrementor){
    printf("%ld\n", count);  
  }
}

int main(void ){

  int choice , number;
  long limit,start,end,incrementor;

  printf("Choose a number \n");
  printf("1. Factorial\n");
  printf("2. Fibonacci\n");
  printf("3. Odd number series\n");
  printf("4. Even number series\n");
  printf("5. Multiplicaton table\n");
  printf("6. Sum of any N numbers\n");
  printf("7. Product of any N numbers\n");
  printf("8. Odd numbers between any two numbers\n");
  printf("9. Every nth number between any two number\n");

  printf("Choice : ");
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
    printf("EMultiplication table : \n");
    print_multiplication_table(num,count);
    break;

  case 6:
    printf("\n---Sum of any N numbers---\n");
    printf("Enter the starting number : ");
    scanf("%ld", &start);
    printf("Enter the ending number : ");
    scanf("%ld", &end);
    printf("Sum : %ld\n", get_sum_of_N_numbers(start,end));
    break;

  case 7:
    printf("\n---Product of any N numbers---\n");
    printf("Enter the starting number : ");
    scanf("%ld", &start);
    printf("Enter the ending number : ");
    scanf("%ld", &end);
    printf("Product : %ld\n", get_product_of_N_numbers(start,end));
    break;

  case 8:
    printf("\n---Odd numbers between any two numbers---\n");
    printf("Enter the starting number : ");
    scanf("%ld", &start);
    printf("Enter the ending number : ");
    scanf("%ld", &end);
    printf("Odd series : \n");
    print_odd_series_between_two(start,end);
    break;

  case 9:
    printf("\n---Every nth number between any two number---\n");
    printf("Enter the starting number : ");
    scanf("%ld", &start);
    printf("Enter the ending number : ");
    scanf("%ld", &end);
    printf("Enter the incrementor : ");
    scanf("%ld", &incrementor);
    printf("Series : \n");
    print_Nth_number_between_two(start,end, incrementor);
    break;
  
  default: printf("Wrong choice");
    break;
  }

  return 0;
}