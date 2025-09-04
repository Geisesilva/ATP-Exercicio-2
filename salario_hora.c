#include <stdio.h>

int main() {

    // Declaração das variáveis
    float salario_min, horas, horas_extra, salario_mes, salario_bruto, irrf, salario_liquido, gratificacao, salario_receber;
    int dependentes;

    // Entrada, processamento e saída de dados
    printf("Salario minimo: ");
    scanf("%f", &salario_min);

    printf("Horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Dependentes: ");
    scanf("%d", &dependentes);

    printf("Horas extras: ");
    scanf("%f", &horas_extra);

    salario_mes = horas * (salario_min / 5);
    salario_bruto = salario_mes + dependentes * 32 + horas_extra * ((salario_min / 5) * 1.5);

    if (salario_bruto < 200)
        irrf = 0;
    else if (salario_bruto <= 500)
        irrf = salario_bruto * 0.10;
    else
        irrf = salario_bruto * 0.20;

    salario_liquido = salario_bruto - irrf;

    if (salario_liquido <= 350)
        gratificacao = 100;
    else
        gratificacao = 50;

    salario_receber = salario_liquido + gratificacao;

    printf("Salario a receber: %.2f\n", salario_receber);

    return 0;
}

// Questão 19: Programa que lê o salário mínimo, o número de horas trabalhadas, o número de dependentes e o número de horas extras trabalhadas em um mês.