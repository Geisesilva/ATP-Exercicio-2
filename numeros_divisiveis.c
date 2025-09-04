#include <stdio.h>

int main() {

    // Declaração de variáveis
    int n[4], i;

    // Entrada, processamento e saída de dados
    printf("Digite quatro numeros: ");
    for (i = 0; i < 4; i++) scanf("%d", &n[i]);

    printf("Numeros divisiveis por 2 e 3: ");
    for (i = 0; i < 4; i++) {
        if (n[i] % 2 == 0 && n[i] % 3 == 0) printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}

// Questão 29: Um programa que leia quatro números inteiros e imprima aqueles que são divisíveis por 2 e 3.