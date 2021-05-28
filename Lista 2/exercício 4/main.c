#include <stdio.h>
#include <unistd.h>  
// PISCA-PISCA com dois leds: um verde e um vermelho, 2 segundos acesso cada
int main(void) {
  
    int led[1];
    int v_aux;

    while (1){
      for (v_aux = 0; v_aux < 1; v_aux ++){
        led[v_aux] = v_aux;
        printf("\nLED %i VERDE ACESO ", led[v_aux]);
        v_aux ++;
        led[v_aux] = v_aux;        
        printf("        LED %i VERMELHO APAGADO\n", led[v_aux]);
        sleep(2);
        
        v_aux = 0;
        led[v_aux] = v_aux;
        printf("\nLED %i VERDE APAGADO ", led[v_aux]);
        v_aux ++;
        led[v_aux] = v_aux;        
        printf("        LED %i VERMELHO ACESO\n", led[v_aux]);
        sleep(2);

      }
    }
 
  return 0;
}
