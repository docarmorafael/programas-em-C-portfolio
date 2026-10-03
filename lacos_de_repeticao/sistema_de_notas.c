// Programa em C que permite ao usuário digitar as notas de vários alunos entre 0 e 10 e,
// além de calcular a média geral da nota total da turma, 
// informa quantidade de alunos aprovados, em recuperação e reprovados.

#include <stdio.h>

int main() {

    // Declaração de variáveis
    float nota, mediaGeral;
    float somaGeral = 0, somaAprovados = 0, somaReprovados = 0, somaRecuperacao = 0;
    int contAprovado = 0, contReprovado = 0, contRecuperacao = 0;
    int quantMedia = 0;
    char notaInvalida;

    printf("\n----- SISTEMA DE NOTAS -----\n");

    // Estrutura de laço de repetição (while).
    // Condição de parada: em loop enquanto a nota digitada pelo usuário for diferente de -1.
    while (nota != -1) {

        // Solitação de nota ao usuário.
        printf("\nInforme uma nota de 0 a 10 (-1 para finalizar o programa): ");
        
        // Tratamento de erro para que o programa não entre em loop infinito
        // após o usuário informar uma variável char em vez de float.
        // Fazendo com que a nota inválida seja identificada apenas 1 vez pelo getchar e validada como um erro pelo EOF
        // que limpará o buffer logo em seguida, retomando o processo de solicitar uma nota ao usuário por meio do continue.
        if (scanf("%f", &nota) != 1) {
            printf("\nErro: entrada inválida! Informe apenas números entre 0 a 10.\n");
            while ((notaInvalida = getchar()) != '\n' && notaInvalida != EOF);
            continue;
        }

        // Estruturas condicionais aninhadas para notas válidas informadas pelo usuário.
        // Cada um apresenta a condição de E para notas em intervalos identificados como aprovado, em recuperação e reprovado.
        // Cada um apresenta contagem incremental de alunos aprovados, em recuperação e reprovados.
        // Cada um apresenta as somas totais das notas separadas entre aprovados, em recuperação e reprovados.
        // Cada um faz a contagem incremental da quantidade de notas informadas.
        if (nota >= 7 && nota <= 10) {
            printf("\nAprovado!\n");
            contAprovado++;
            quantMedia++;
            somaAprovados += nota;
        } else if (nota >= 5 && nota <=10) {
            printf("\nRecuperação.\n");
            contRecuperacao++;
            quantMedia++;
            somaRecuperacao += nota;
        } else if (nota >= 0 && nota < 5) {
            printf("\nReprovado.\n");
            contReprovado++;
            quantMedia++;
            somaReprovados += nota;
        
        // Tratamento de erro para caso a nota informada pelo usuário esteja anterior a -1 OU superior a 10.
        } else if (nota <= -2 || nota > 10) {
            printf("\nNota inválida! Informe uma nota entre 0 e 10!\n");
        }

    }
    
    // Equação da soma geral que representa o cálculo da nota total geral da turma,
    // obtida a partir das notas totais separadas entre aprovados, em recuperação e reprovados. 
    somaGeral = somaAprovados + somaRecuperacao + somaReprovados;
    
    // Equação da nota média geral obtida pela divisão da nota total geral da turma e 
    // da quantidade das notas individuais informadas entre aprovados, em recuperação e reprovados.
    mediaGeral = somaGeral/quantMedia;

    // Estrutura condicional que, com base na quantidade de notas válidas maiores ou iguais a 0,
    // informa as contagens de alunos aprovados, em recuperação e reprovados, bem como a nota média geral da turma.
    // Operações realizadas no laço de repetição While.
    if (quantMedia >= 0)
        printf("\n----- RESULTADO -----\n");
        printf("\nAlunos aprovados: %d\n", contAprovado);
        printf("\nAlunos recuperação: %d\n", contRecuperacao);
        printf("\nAlunos reprovados: %d\n", contReprovado);
        printf("\nMédia geral das notas: %.2f\n", mediaGeral);

    return 0;
}