#include <stdio.h>

int main() {
    int x, y;
    char op;
    float resultado;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') resultado = x + y;
    else if (op == '-') resultado = x - y;
    else if (op == '*') resultado = x * y;
    else if (op == '/') resultado = (float)x / y;
    else {
        printf("Operacao invalida!\n");
        return 0;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}

// Questão 26: Um programa que leia dois números inteiros e uma operação (+, -, *, /) e imprima o resultado da operação.