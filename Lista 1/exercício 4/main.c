
#include <stdio.h>

int main(void) {

  //Declaração das variaveis
  int nro_1, nro_2, nro_3;

  //Entrada de valores 
  printf("Entre com o valor do número 1: \n");
  scanf("%i", &nro_1);
  printf("Entre com o valor do número 2: \n");
  scanf("%i", &nro_2);
  printf("Entre com o valor do número 3: \n");
  scanf("%i", &nro_3);

  //Possivel erro
  if (nro_1 == nro_2 && nro_2 == nro_3){
    printf("Os valores são iguais não existe ordem decrescente\n");
    return 0; 
  }

  if (nro_1 > nro_2){
    if (nro_2 > nro_3){
      printf("A ordem decrescente dos valores é: %i, %i, %i\n", nro_1, nro_2, nro_3);
    }else if (nro_1 > nro_3){
      printf("A ordem decrescente dos valores é: %i, %i, %i\n", nro_1, nro_3, nro_2);
    }else{
      printf("A ordem decrescente dos valores é: %i, %i, %i\n", nro_3, nro_1, nro_2);
    }
  }else if (nro_1 > nro_3){
    printf("A ordem decrescente dos valores é: %i, %i, %i\n", nro_2, nro_1, nro_3);
  }else if (nro_2 > nro_3){
    printf("A ordem decrescente dos valores é: %i, %i, %i\n", nro_2, nro_3, nro_1);
  }else{
    printf("A ordem decrescente dos valores é: %i, %i, %i\n", nro_3, nro_2, nro_1);
  }

  return 0;
}
