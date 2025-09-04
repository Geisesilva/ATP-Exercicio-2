#include <stdio.h>

int main() {

    // Declaração de variáveis
    int num;

    // Entrada, processamento e saída
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("NUMERO POSITIVO\n");
    } else if (num < 0) {
        printf("NUMERO NEGATIVO\n");
    } else {
        printf("zero\n");
    }

    return 0;
}

// Questão 27: teste se um número é positivo, negativo ou zero, fiz um algoritmo bem simples mesmo.
// Usei if, else if e else para testar as condições, se o número é maior que zero, menor que zero ou igual a zero.