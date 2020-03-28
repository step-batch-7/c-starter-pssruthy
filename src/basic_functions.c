#include <stdio.h>

int isEven(int);

int isEven(int num){
  return num % 2 == 0;
}

int main(void){

  int num;
  printf("Enter a number to check even : ");
  scanf("%d", &num);
  printf("%s\n" ,isEven(num)?"even":"not even");

  printf("Enter a number to check odd : ");
  scanf("%d", &num);
  printf("%s\n" ,isEven(num)?"not odd":"odd");

  return 0;
}