#include <stdio.h>
#include <math.h>

int main() {

    // Declaração de variáveis
    int opcao;
    float num1, num2;

    // Entrada, processamento e saída de dados
    printf("Menu de opcoes:\n");
    printf("1 - Soma\n");
    printf("2 - Raiz Quadrada\n");
    printf("3 - Finalizar\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        printf("Resultado: %.2f\n", num1 + num2);
    } else if (opcao == 2) {
        printf("Digite um numero: ");
        scanf("%f", &num1);
        printf("Resultado: %.2f\n", sqrt(num1));
    } else if (opcao == 3) {
        // Aqui não faz nada mesmo, só pra finalizar
    }

    return 0;
}

// Questão 15: Menu interativo com opções de soma, raiz quadrada e finalizar
