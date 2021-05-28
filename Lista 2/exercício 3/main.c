#include <stdio.h>

int main(void) {
 
 int qtde = 5;
 int v_aux = 0;
 int e_nro[qtde];
 int v_aux_2 = 0;
 int v_aux_3;
 
 
 for (v_aux = 0; v_aux < qtde; v_aux++){
   printf("Entre com um número: ");
   scanf("%i", &e_nro[v_aux]);
   }

  
    
    for (v_aux_2 = 0; v_aux_2 < qtde; v_aux_2 ++){
      for (v_aux = 0; v_aux < qtde -1 - v_aux_2; v_aux ++){
           if (e_nro[v_aux] > e_nro[v_aux + 1]){
              v_aux_3 = e_nro[v_aux];
              e_nro[v_aux] = e_nro[v_aux + 1];
              e_nro[v_aux + 1] = v_aux_3;
           }
      }
      printf(" %d", e_nro[v_aux]);
    }

  return 0;
}
