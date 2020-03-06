#include <stdio.h>

int main(void) {

int cod1, num1, cod2, num2;
float valor1, valor2, valor, valorapagar;

scanf("%d%d%f", &cod1, &num1, &valor1);
scanf("%d%d%f", &cod2, &num2, &valor2);
valorapagar = num1 * valor1 + num2 * valor2;
printf("VALOR A PAGAR: R$ %.2f\n", valorapagar);

  return 0;
}
