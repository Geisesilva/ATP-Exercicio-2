#include <stdio.h>

int main() {

    //declaração de variaveis
    int idade;

    //Entrada, processamento e saida de dados
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    switch (idade) {
        case 5:
        case 6:
        case 7:
            printf("Categoria: Infantil A\n");
            break;
        case 8:
        case 9:
        case 10:
            printf("Categoria: Infantil B\n");
            break;
        case 11:
        case 12:
        case 13:
            printf("Categoria: Juvenil A\n");
            break;
        case 14:
        case 15:
        case 16:
        case 17:
            printf("Categoria: Juvenil B\n");
            break;
        default:
            if (idade >= 18) {
                printf("Categoria: Sênior\n");
            } else {
                printf("Idade invalida para competicao.\n");
            }
            break;
    }

    return 0;
}

// Questão 7: Classificação de nadadores