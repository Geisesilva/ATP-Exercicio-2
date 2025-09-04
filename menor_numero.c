#include <stdio.h>

int main() {

    //declaração de Variaveis
    int n1, n2;

    // Entrada, processamento e saída de dados
    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);   

    if (n1 < n2) {
        printf("O menor numero e: %d\n", n1);
    } else {
        printf("O menor numero e: %d\n", n2);
    }
    return 0;
}

// Questão 11: Ler dois números e imprimir o menor deles.