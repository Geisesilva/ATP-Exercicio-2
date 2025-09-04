#include <stdio.h>

int main() {

    // Declaração de variáveis
    int a, b, c, temp;

    // Entrada, processamento e saída
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
    return 0;
}

// Questão 24: Escreva um programa que leia três valores inteiros e os imprima em ordem crescente.
// Usei o bubble sort para ordenar os valores. No técnico aprendi um pouco sobre bubble sort e fiz algo parecido em javascript, achei que poderia usar aqui também