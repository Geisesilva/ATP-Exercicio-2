#include <stdio.h>

int main() {

    //declaração de Variavel
    int numero;

    // Entrada, processamento e saída de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}

// Questão 10: Verificar se um número é par ou ímpar