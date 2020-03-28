#include <stdio.h>

int isEven(int);

int isEven(int num){
  return num % 2 == 0;
}

int main(void){

  int num;

  printf("Enter a number to check even : ");
  scanf("%d", &num);
  printf("%d is %s\n" ,num,isEven(num)?"even":"not even");
  return 0;
}