#include <stdio.h>

int main() {
    
    //declaração de variaveis
    float salario, salario_reajustado;
    
    //entrada, processamento e saida de dados
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if (salario <= 300) {
        salario_reajustado = salario * 1.5; // 50% de aumento
    } else {
        salario_reajustado = salario * 1.3; // 30% de aumento
    }

    printf("Seu salario reajustado e: %.2f\n", salario_reajustado);

    return 0;
}


//  Questão 5: Ajuste de salário