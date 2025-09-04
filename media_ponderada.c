#include <stdio.h>

int main() {

    // declaração de variáveis
    float lab, av_sem, exame, media;

    // Entrada, processamento e saida de dados
    printf("Digite a nota do laboratorio: ");
    scanf("%f", &lab);

    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &av_sem);

    printf("Digite a nota do exame final: ");
    scanf("%f", &exame);

    
    media = (lab*2 + av_sem*3 + exame*5) / 10;

    printf("Media final: %.2f\n", media);

    if (media >= 8.0) {
        printf("Conceito: A\n");
    } else if (media >= 7.0) {
        printf("Conceito: B\n");
    } else if (media >= 6.0) {
        printf("Conceito: C\n");
    } else if (media >= 5.0) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }

    return 0;
}

// Questão 8: Cálculo da média ponderada e atribuição de conceito