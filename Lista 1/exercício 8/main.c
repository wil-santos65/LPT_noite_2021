
#include <stdio.h>

int main(void) {

  //Declarações das variaveis
  float entrada_r1, entrada_r2, entrada_r3, entrada_r4, saida_req1, saida_req2, saida_reqt;
  
  //Entrada dos valores dos resistores
  printf("Entre com o valor do resistor 1 [ohm]: \n");
  scanf("%f", &entrada_r1);
  printf("Entre com o valor do resistor 2 [ohm]: \n");
  scanf("%f", &entrada_r2);
  printf("Entre com o valor do resistor 3 [ohm]: \n");
  scanf("%f", &entrada_r3);
  printf("Entre com o valor do resistor 4 [ohm]: \n");
  scanf("%f", &entrada_r4);

//Calculo
 saida_req1 = (entrada_r1 * entrada_r2) / (entrada_r1 + entrada_r2);
 saida_req2 = (entrada_r3 * entrada_r4) / (entrada_r3 + entrada_r4);
 saida_reqt = (saida_req1 * saida_req2) / (saida_req1 + saida_req2);

printf("O valor da resistência equivalente é: %.3f [ohm]\n", saida_reqt);

  return 0;
}
