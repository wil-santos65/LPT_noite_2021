Código em C
#include <stdio.h>

int main(void) {

  //Declarção das variaveis
  float altura, sexo, peso_ideal;

  //Opções para sexo
  printf("Para o sexo feminino digite 0 | Para o sexo masculino digite 1\n");
  
 

  //Entrada sexo
  printf("Entre com o sexo: \n");
  scanf("%f", &sexo);

if (sexo != 1 && sexo != 0){
  printf("ERRO, sexo escolhido inexistene\n");
  return 0;
}

  //Entrada altura
  printf("Entre com a altura em [m]: \n");
  scanf("%f", &altura);

  if (sexo == 1){
    peso_ideal = 72.7 * altura - 58;
    printf("O peso ideal é: %.2f Kg\n", peso_ideal);
  }else{
    peso_ideal = 62.1 * altura - 44.7;
    printf("O peso ideal é: %.2f Kg\n", peso_ideal);
  }
 
  return 0;
}
