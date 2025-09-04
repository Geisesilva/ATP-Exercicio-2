#include <stdio.h>

int main() {

    // Declaração das variáveis
    int horas_extras, horas_faltadas, premio;
    float H;

    // Entrada, processamento e Saída de dados
     printf("Digite o numero de horas extras (em minutos): ");
    scanf("%d", &horas_extras);

    printf("Digite o numero de horas-falta (em minutos): ");
    scanf("%d", &horas_faltadas);

    H = horas_extras - ( (2.0/3.0) * horas_faltadas);

     if (H > 2400) {
        premio = 500;
    } else if (H >= 1800) {
        premio = 400;
    } else if (H >= 1200) {
        premio = 300;
    } else if (H >= 600) {
        premio = 200;
    } else {
        premio = 100;
    }
    
    printf("Horas extras em horas: %.2f\n", horas_extras / 60.0);
    printf("Horas-falta em horas: %.2f\n", horas_faltadas / 60.0);
    printf("Premio: R$ %d\n", premio);

    return 0;
}

// Questão 18: Programa que lê o número de horas extras e horas-falta (em minutos).