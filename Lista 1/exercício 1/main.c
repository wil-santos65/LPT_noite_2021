#include <stdio.h>

int main(void) {

  //Declaração de variaveis
  int e_nro_1, e_nro_2, e_nro_3;

  //Entrada de valores
  printf("Entre com o valor do número 1: ");
  scanf("%i", &e_nro_1);
  printf("Entre com o valor do número 2: ");
  scanf("%i", &e_nro_2);
  printf("Entre com o valor do número 3: ");
  scanf("%i", &e_nro_3);

  if (e_nro_1 == e_nro_2 && e_nro_2 == e_nro_3){
    printf("Os valores são iguais não existe ordem crescente.\n");
  }
  

  if (e_nro_1 > e_nro_2){
    //Processo 4
    if (e_nro_2 > e_nro_3){
      printf("A ordem crescente dos valores é: %i, %i, %i\n", e_nro_3, e_nro_2, e_nro_1);
    //Processo 5
    }else if (e_nro_1 > e_nro_3){
      printf("A ordem crescente dos valores é: %i, %i, %i\n", e_nro_2, e_nro_3, e_nro_1);
    //Processo 6
    }else 
      printf("A ordem crescente dos valores é: %i, %i, %i\n", e_nro_2, e_nro_1, e_nro_3);
  //Processo7
  }else if(e_nro_1 > e_nro_3){
    printf("A ordem crescente dos valores é: %i, %i, %i\n", e_nro_3, e_nro_1, e_nro_2);
  //Processo 8
  }else if (e_nro_2 > e_nro_3){
    printf("A ordem crescente dos valores é: %i, %i, %i\n", e_nro_1, e_nro_3, e_nro_2);
  //Processo 9
  }else{
    printf("A ordem crescente dos valores é: %i, %i, %i\n", e_nro_1, e_nro_2, e_nro_3);
  } 

 return 0;
}
