#include <stdio.h>

int main() {

    // Declaração de variáveis
    int codigo;

    // Entrada, processamento e saída de dados
    printf("Digite o codigo do cargo do funcionario: ");
    scanf("%d", &codigo);


    if (codigo == 1) {
        printf("Cargo: Escriturario\nPercentual de aumento: 50%%\n");
    } else if (codigo == 2) {
        printf("Cargo: Secretario\nPercentual de aumento: 35%%\n");
    } else if (codigo == 3) {
        printf("Cargo: Caixa\nPercentual de aumento: 20%%\n");
    } else if (codigo == 4) {
        printf("Cargo: Gerente\nPercentual de aumento: 10%%\n");
    } else if (codigo == 5) {
        printf("Cargo: Diretor\nNao tem aumento\n");
    } else {
        printf("Codigo invalido\n");
    }

    return 0;
}

// Questão 14: Cálculo de aumento salarial baseado no cargo