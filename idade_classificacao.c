#include <stdio.h>

int main() {

    // Declaração de variáveis
    int idade;

    // Entrada, processamento e saída de dados
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 2) {
        printf("Recem-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Crianca\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Adulto\n");
    } else { // idade > 55
        printf("Idoso\n");
    }

    return 0;
}

// Questão 13: Classificação de idade em categorias