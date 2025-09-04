#include <stdio.h>

int main() {

    // Declaração de variáveis
    float preco, valor_final;
    int condicao;

    // Entrada, processamento e saída
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a condicao de pagamento (1 a 4): ");
    scanf("%d", &condicao);

    if (condicao == 1)
        valor_final = preco * 0.9;  
    else if (condicao == 2)
        valor_final = preco * 0.95; 
    else if (condicao == 3)
        valor_final = preco;         
    else if (condicao == 4)
        valor_final = preco * 1.10; 
    else {
        printf("Condicao invalida!\n");
        return 0;
    }

    printf("Valor a pagar: %.2f\n", valor_final);
    return 0;
}

// Questão 23: Escreva um programa que leia o preço de um produto e a condição de pagamento e calcule o valor final a ser pago.