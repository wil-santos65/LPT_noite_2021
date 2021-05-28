#include <stdio.h>

int main(void) {
  
  int temp_atual; //temperatura atual  
     
      printf("Insira a temperatura do radiador [°C]: ");
      scanf("%i", &temp_atual);
      
       while(1){
        
        while(temp_atual <= 90){
          printf("temperatura: %i\n", temp_atual);
          temp_atual ++;
        }
        
        if (temp_atual > 90){
          printf("\nACIONAR VENTOINHA\n");

          while (temp_atual > 70){
            temp_atual --;
            printf("temperatura: %i\n", temp_atual);
            
            if (temp_atual == 70){
              
              printf("\nDESLIGAR VENTOINHA\n");
            }
          }  
        } 
                    
       }
  return 0;
}
