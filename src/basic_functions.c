#include <stdio.h>
#include <math.h>

int isEven(int);
int isOdd(int);

unsigned int square(int);
int cube(int);

int GCD(int, int);
int LCM(int, int);

double simple_interest(float, float, float);
double compound_interest(float, float, float);

double convert_to_centigrade(double);
double convert_to_fahrenheit(double);

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

double simple_interest(float principle,float interest,float time){
  return (principle * interest * time) /100;
}

double compound_interest(float principle,float interest,float time){
  return (principle * pow((1 + interest / 100), time)) - principle;
}

double convert_to_centigrade(double fahrenheit){
  return (fahrenheit - 32) * 5 / 9;
}

double convert_to_fahrenheit(double centigrade){
  return (centigrade * 9 / 5) + 32;
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
  printf("LCM : %d\n" ,LCM(num1, num2));

  float principle, interest,time;
  printf("\nSimple Interest\n");
  printf("Enter the principle : ");
  scanf("%f", &principle);
  printf("Annual interest rate : ");
  scanf("%f", &interest);
  printf("Time : ");
  scanf("%f", &time);
  printf("Simple interest : %f\n", simple_interest(principle, interest,time));

  printf("\nCompound Interest\n");
  printf("Enter the principle : ");
  scanf("%f", &principle);
  printf("Annual interest rate : ");
  scanf("%f", &interest);
  printf("Time : ");
  scanf("%f", &time);
  printf("Simple interest : %f\n", compound_interest(principle, interest,time));

  double fahrenheit;
  printf("\nTemperature Conversion\n");
  printf("Enter temperature in fahrenheit : ");
  scanf("%lf", &fahrenheit);
  printf("Temperature in centigrade : %lf\n\n", convert_to_centigrade(fahrenheit));

  double centigrade;
  printf("Enter temperature in centigrade : ");
  scanf("%lf", &centigrade);
  printf("Temperature in fahrenheit : %lf\n", convert_to_fahrenheit(centigrade));

  return 0;
}