#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variaveis
  float resistencia, p_1, resistividade, diam, area, comp;
  float p_2, alfa, temp_mat, temp_ref;

  temp_ref = 20;

  //Entrada de valores para calcular resistência a 20 graus celsius 
  printf("Entre com o diâmetro do fio [cm]: \n");
  scanf("%f", &diam);
  
  area = 3.141592654 * pow (diam/2,2);

  printf("Entre com comprimento do fio [cm]: \n");
  scanf("%f", &comp);

  printf("Tipos de materiais disponíveis:\n");
  printf("1 - PRATA\n");
  printf("2 - COBRE\n");
  printf("3 - OURO\n");
  printf("4 - ALUMÍNIO\n");
  printf("5 - TUNGSTÊNIO\n");
  printf("Escolha o material: \n");
  scanf("%f", &p_1);
  
 //ERRO 
  if (p_1 > 5 || p_1 < 1){
    printf("ERRO, material escolhido inexistente\n");
    return 0;
  }

  //Valores tabelados para prata
  if (p_1 == 1){
    resistividade = 1.59 * pow (10,-6);
    alfa = 0.038;
  }
  
  //Valores tabelados para cobre
   if (p_1 == 2){
    resistividade = 1.72 * pow (10,-6);
    alfa = 0.039;
  }

  //Valores tabelados para ouro
   if (p_1 == 3){
    resistividade = 2.44 * pow (10,-6);
    alfa = 0.034;
  }

  //valores tabelados para alumínio 
   if (p_1 == 4){
    resistividade = 2.92 * pow (10,-6);
    alfa = 0.039;
  }

  //Valores tabelados para tungstênio
   if (p_1 == 5){
    resistividade = 5.6 * pow (10,-6);
    alfa = 0.045;
  }


  //Calculo da resistência a 20 graus celsius
  resistencia = resistividade * (comp / area);
 

 //resistência com temperatura diferente de 20 graus celsius
 printf("Entre com a temperatura do uso do material [°C]: \n");
 scanf("%f", &temp_mat);

 //Calculo da resistência com temperatura diferente de 20 graus celsius
 p_2 = resistencia * (1 + alfa * (temp_mat - temp_ref));
 printf("A resistividade do fio à %.2f °C é: %.8f ", temp_mat, p_2);
  
  
  return 0;
}
