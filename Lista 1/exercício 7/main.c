#include <stdio.h>

int main(void) {
  
  //Declaração das variaveis
  float entrada_r1, entrada_r2, entrada_r3, entrada_r4, saida_req;

  //Entrada dos valores dos resistores
  printf("Entre com o valor de R1 [ohm]: \n");
  scanf("%f", &entrada_r1);
  printf("Entre com o valor de R2 [ohm]: \n");
  scanf("%f", &entrada_r2);
  printf("Entre com o valor de R3 [ohm]: \n");
  scanf("%f", &entrada_r3);
  printf("Entre com o valor de R4 [ohm]: \n");
  scanf("%f", &entrada_r4);

  //Calculo da resistencia equivalente
  saida_req = entrada_r1 + entrada_r2 + entrada_r3 + entrada_r4;

  //Saida
  printf("O valor da resistência equivalente é: %.3f [ohm]\n", saida_req);

  return 0;
}
