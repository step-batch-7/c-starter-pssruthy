#include <stdio.h>

int isEven(int);
int isOdd(int);
unsigned int square(int);
int cube(int);

int isEven(int num){
  return num % 2 == 0;
}

int isOdd(int num){
  return isEven(num) == 0;
}

unsigned int square(int num){
  return num * num;
}

int cube(int num){
  return square(num) * num;
}

int main(void){

  int num;
  
  printf("Enter a number to check even : ");
  scanf("%d", &num);
  printf("%s\n" ,isEven(num)?"even":"not even");

  printf("Enter a number to check odd : ");
  scanf("%d", &num);
  printf("%s\n" ,isOdd(num)?"odd":"not odd");

  printf("Enter a number to determine square : ");
  scanf("%d", &num);
  printf("%u\n" ,square(num));

  printf("Enter a number to determine cube : ");
  scanf("%d", &num);
  printf("%d\n" ,cube(num));

  return 0;
}