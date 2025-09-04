#include <stdio.h>

int main() {

    //declaração de variaveis
    float altura, peso;
    char sexo;

    // Entrada, processamento e saida de dados
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido!\n");
        return 0;
    }

    printf("Seu peso ideal e: %.2f kg\n", peso);

    return 0;
}

// Questão 6: Cálculo do peso ideal