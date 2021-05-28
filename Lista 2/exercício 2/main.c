#include <stdio.h>

int main(void) {

int unidade, dezena, centena, produto;

unidade = 0;
dezena = 0;
centena = 1;

while (produto < 729){
  printf("%i%i%i", centena, dezena, unidade);
  produto = unidade * dezena * centena;
  printf(" Produto: %i\n", produto);

  unidade ++;

  if (unidade == 10){
    unidade = 0;
    dezena ++;
  }

  if (dezena == 10){
    dezena = 0;
    centena ++;
    
  }
  }
   
  return 0;
}
