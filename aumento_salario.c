#include <stdio.h>

int main() {

    //declaração de variáveis
    float salario, aumento, novo_salario;

    //entrada, processamento e saida de dados
    printf("Qual seu salario atual? ");
    scanf("%f", &salario);

    if (salario < 500)
    {
        aumento = salario * 1.3; // aumento de 30%
        printf("Seu aumento foi de R$ %.2f\n", aumento);

        novo_salario = salario + aumento;
        printf("Seu novo salario e de R$ %.2f\n", novo_salario);
    } else {

        printf("Sem aumento salarial!\n");
    }

        return 0; 
    
}

// Questão 2: Cálculo de aumento salarial