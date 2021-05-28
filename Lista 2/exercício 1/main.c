#include <stdio.h>

int main(void) {

  int e_nro_1, e_nro_2, mmc, valor_aux;

  printf("Entre com o numero 1: ");
  scanf("%d", &e_nro_1);

  printf("Entre com o numero 2: ");
  scanf("%d", &e_nro_2);

  mmc = 1;
  valor_aux = 2;

  while ((e_nro_1 > 1) && (e_nro_2 > 1)){
       
       while (( e_nro_1 % valor_aux > 0) || (e_nro_2 % valor_aux >0) ){
       valor_aux ++;

     } 
     if (e_nro_1 % valor_aux == 0){
       e_nro_1 --;
       } 
     
     if (e_nro_2 % valor_aux == 0){
       e_nro_2 --;
        }
        
     mmc =mmc * valor_aux;
  }
  
  printf("MMC %d \n", mmc);
  return 0;
}
