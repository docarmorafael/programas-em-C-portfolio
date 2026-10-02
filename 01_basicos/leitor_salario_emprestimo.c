// Programa em C que lê o salario de um trabalhador e o valor da prestação de um empréstimo. 
// Se a prestação for maior que 20% do salário imprima: 
//"Empréstimo não concedido, caso contrário imprima: "Empréstimo concedido."

#include <stdio.h>

int main () {

    // Declaração de variáveis
    float salario, prestacao, porcentagem;

    // Leitura de dados inseridos pelo usuário
    printf("Informe seu salário: ");
    scanf("%f", &salario);

    printf("\nInforme o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    // Conversor salário-porcentagem
    porcentagem = salario * 0.20;

    // Condicionais simples e resultados dos dados inseridos pelo usuário
    if (prestacao > porcentagem)
        printf("\nEmpréstimo não concedido");
    else printf("\nEmpréstimo concedido");

    return 0;

}