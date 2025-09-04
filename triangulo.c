#include <stdio.h>

int main() {

    // Declaração de variáveis
    int a, b, c;

    // Entrada, processamento e saída
    printf("Digite tres lados: ");
    scanf("%d %d %d", &a, &b, &c); //%d %d %d para ler três inteiros, usado em sala de aula e pesquisado em outros lugares

    if (a + b > c && a + c > b && b + c > a) { // && é o operador lógico "E" e serve para combinar múltiplas condições
        if (a == b && b == c) printf("Triangulo equilatero\n");
        else if (a == b || a == c || b == c) printf("Triangulo isosceles\n");
        else printf("Triangulo escaleno\n");
    } else {
        printf("Nao forma um triangulo\n");
    }
    return 0;
}

// Questão 28: Um programa que leia três lados e informe se formam um triângulo.