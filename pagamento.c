#include <stdio.h>

int main() {

    // Declaração de variáveis
    float precoEtiqueta, precoFinal;
    int codigo;

    // Entrada, processamento e saída
    printf("Digite o preco do produto: ");
    scanf("%f", &precoEtiqueta);

    printf("Digite o codigo da condicao de pagamento (1 a 4): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        precoFinal = precoEtiqueta * 0.90;
    } else if (codigo == 2) {
        precoFinal = precoEtiqueta * 0.95;
    } else if (codigo == 3) {
        precoFinal = precoEtiqueta;
    } else if (codigo == 4) {
        precoFinal = precoEtiqueta * 1.10;
    } else {
        printf("Codigo invalido.\n");
        return 1;
    }

    printf("Valor a ser pago: R$ %.2f\n", precoFinal);

    return 0;
}

// Questão 25: Um programa que leia o preço de um produto e o código da condição de pagamento e calcule o valor a ser pago.