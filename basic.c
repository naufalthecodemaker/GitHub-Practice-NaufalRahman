#include <stdio.h>
int main(){
  float a, b, result;

  printf("Enter the first number: ");
  scanf("%f", &a);

  printf("Enter the second number: ");
  scanf("%f", &b);

  result = a * b;

  printf("Result: %.2f", result);
  return 0;
}