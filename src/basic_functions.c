#include <stdio.h>

int isEven(int);
int isOdd(int);
unsigned int square(int);
int cube(int);
int GCD(int, int);
int LCM(int, int);

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

int GCD(int num1, int num2){

  int min = num1 > num2 ? num2 : num1;

  for(int min = num1; min >= 1; min--){
    if(num1 % min == 0 && num2 % min == 0){
      return min;
    }
  }
}

int LCM(int num1, int num2){
  return (num1 * num2) / GCD(num1, num2);
}

int main(void){

  int num;

  printf("Enter a number to check even : ");
  scanf("%d", &num);
  printf("%s\n\n" ,isEven(num)?"even":"not even");

  printf("Enter a number to check odd : ");
  scanf("%d", &num);
  printf("%s\n\n" ,isOdd(num)?"odd":"not odd");

  printf("Enter a number to determine square : ");
  scanf("%d", &num);
  printf("%u\n\n" ,square(num));

  printf("Enter a number to determine cube : ");
  scanf("%d", &num);
  printf("%d\n\n" ,cube(num));

  int num1, num2;
  printf("Enter two numbers to find the greatest common divisor : ");
  scanf("%d %d", &num1, &num2);
  printf("GCD : %d\n\n" ,GCD(num1, num2));

  printf("Enter two numbers to find the least common multiple : ");
  scanf("%d %d", &num1, &num2);
  printf("LCM : %d\n\n" ,LCM(num1, num2));

  return 0;
}