#include <stdio.h>

int main() {
    int idade, codigo;
    char risco;

    scanf("%d", &idade);
    scanf(" %c", &risco);

    if (idade >= 18 && idade <= 24) {
        if (risco == 'b') codigo = 7;
        else if (risco == 'm') codigo = 8;
        else if (risco == 'a') codigo = 9;
    } else if (idade >= 25 && idade <= 40) {
        if (risco == 'b') codigo = 4;
        else if (risco == 'm') codigo = 5;
        else if (risco == 'a') codigo = 6;
    } else if (idade >= 41 && idade <= 70) {
        if (risco == 'b') codigo = 1;
        else if (risco == 'm') codigo = 2;
        else if (risco == 'a') codigo = 3;
    }

    printf("%d\n", codigo);

    return 0;
}

// Questão 16: Companhia de Seguros