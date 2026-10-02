// Programa que recebe a altura e o sexo de uma pessoa e calcula e mostra seu peso ideal, 
// utilizando as equações (onde  h corresponde a altura): 
// Homens: (72.7 ∗ h) − 58
// Mulheres: (62.1 ∗ h) − 44.7

#include <stdio.h>

int main() {

// Declaração de variáveis
  char sexo;
  float h, Homem, Mulher;

// Solicitação e leitura de dados do usuário
  printf("Informe seu sexo M/F: ");
  scanf("%c", &sexo);

  printf("Informe sua altura: ");
  scanf("%f", &h);

// Estruturas Condicionais aninhadas e resultado dos dados inseridos pelo usuário
  if (sexo == 'M' || sexo == 'm') {
    Homem = (72.7 * h) - 58;
    printf("%.2f", Homem);

  } else if (sexo == 'F' || sexo == 'f') {
    Mulher = (62.1 * h) - 44.7;
    printf("%.2f", Mulher);

  } else printf("Sexo informado inválido.");

  return 0;

}