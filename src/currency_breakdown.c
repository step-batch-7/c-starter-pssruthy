#include<stdio.h>

void print_number_of_notes(int, long);

void print_number_of_notes(int note, long balance){
  printf("%ld x Rs %d\n", balance / note,note);
}

int main(void){
  
  long currency, balance;
  printf("Currency Breakdown\n\n");

  printf("Enter currency : ");
  scanf("%ld", &currency);
  print_number_of_notes(2000, currency);
  balance = currency % 2000;
  print_number_of_notes(500, balance);
  balance = balance % 500;
  print_number_of_notes(200, balance);
  balance = balance % 200;
  print_number_of_notes(100, balance);
  balance = balance % 100;
  print_number_of_notes(50, balance);
  balance = balance % 50;
  print_number_of_notes(10, balance);
  balance = balance % 10;
  print_number_of_notes(5, balance);
  balance = balance % 5;
  print_number_of_notes(1, balance);
  balance = balance % 1;
  
  return 0;
}