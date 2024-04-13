//Simple Calculator using switch Statement
#include <stdio.h>

int main() {

  char op;
  float a,b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: \n");
  scanf("%f %f", &a, &b);

  switch (op) {
    case '+':
      printf("Sum = %f",(a+b));
      break;
    case '-':
      printf("Difference = %f",(a-b));
      break;
    case '*':
      printf("Product = %f",(a*b));
      break;
    case '/':
      printf("Division = %f",(a/b));
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");}
  }