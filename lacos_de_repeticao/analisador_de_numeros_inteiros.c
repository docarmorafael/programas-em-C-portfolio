// Programa em linguagem C que funciona como um pequeno sistema de análise de números inteiros.
// O programa deverá solicitar números inteiros ao usuário, um por vez, até que seja digitado o valor 0.

#include <stdio.h>

int main() {

    // Declaração de variáveis
    int num, quantNumeros = 0, quantPares = 0, quantImpares = 0;
    int somaPositivos = 0, somaNegativos = 0;
    int numMaior, numMenor;
    char numInvalido;

    printf("\n----- ANALISADOR DE NÚMEROS INTEIROS -----\n");

    // Estrutura de laço de repetição (While).
    // Condição de parada: em loop enquanto o número informado pelo usuário for diferente de 0.
    while (num != 0) {

        // Solitação de número ao usuário.
        printf("\nInforme um número inteiro (0 para finalizar o programa): ");

        // Tratamentos de erro para que o programa não entre em loop infinito
        // após o usuário informar uma variável char ou float em vez de int.
        // Fazendo com que o número inválido seja identificado apenas 1 vez pelo getchar e validado como um erro pelo EOF
        // que limpará o buffer logo em seguida, retomando o processo de solicitar um número inteiro ao usuário por meio do continue.
        if (scanf("%d%c", &num, &numInvalido) != 1 || (numInvalido != '\n' && numInvalido != ' ' && numInvalido != '\t')) {
            printf("\nErro! Informe apenas números inteiros.\n");
            while((numInvalido = getchar ()) != '\n' && numInvalido != EOF);
            continue;
        }

        // Estruturas condicionais aninhadas para os números informados pelo usuário.
        // Cada uma apresenta a condição de E para números identificados entre positivos, negativos, ímpares e pares.
        // Cada uma faz a contagem incremental da quantidade de números informados.
        // Cada uma faz a contagem incremental da quantidade de números pares e ímpares informados separadamente.
        // Cada uma faz as somas dos números positivos e dos números negativos separadamente.
        if(num % 2 == 0 && num > 0) {
            printf("\nNúmero par e positivo: %d\n", num);
            quantNumeros++;
            quantPares++;
            somaPositivos += num;
        } else if(num % 2 == 0 && num < 0) {
            printf("\nNúmero par e negativo: %d\n", num);
            quantPares++;
            quantNumeros++;
            somaNegativos += num;
        } else if(num % 2 != 0 && num > 0) {
            printf("\nNúmero ímpar e positivo: %d\n", num);
            quantNumeros++;
            quantImpares++;
            somaPositivos += num;
        } else if (num % 2 != 0 && num < 0) {
            printf("\nNúmero ímpar e negativo: %d\n", num);
            quantNumeros++;
            quantImpares++;
            somaNegativos += num;
        }

        // Estrutura condicional aninhada que analisa os números informados pelo usuário durante o laço de repetição While,
        // após o usuário encerrar o laço com 0, e classifica o maior número e o menor número do laço.
        if (quantNumeros == 0) {
            numMaior = num;
            numMenor = num;
        } else if (num > numMaior) {
            numMaior = num;
        } else if (num < numMenor) {
            numMenor = num;
        }

    }
        // Relatório que informa todas as ações e classificações pelos quais os números passaram durante o laço de repetição While.
        // Após o laço de repetição While ser interrompido, o relatório aparecerá independente do usuário ter informado
        // números ou não.
        printf("\n----- RELATÓRIO -----\n");
        printf("\nQuantidade de números informados: %d\n", quantNumeros);
        printf("\nQuantidade de números pares informados: %d\n", quantPares);
        printf("\nQuantidade de números ímpares informados: %d\n", quantImpares);
        printf("\nSoma dos números positivos informados: %d\n", somaPositivos);
        printf("\nSoma dos números negativos informados: %d\n", somaNegativos);
        printf("\nMaior número informado: %d\n", numMaior);
        printf("\nMenor número informado: %d\n", numMenor);

    return 0;

}
