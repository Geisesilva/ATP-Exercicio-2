#include <stdio.h>

int main() {

    // Declaração de variáveis
    float nota1, nota2, nota3, media;

    // Entrada de dados processamento e saída de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);    

      media = (nota1 + nota2 + nota3) / 3;

    if (media <= 5.0)
    {
       printf(" Voce foi Reprovado!\n");
    }else if (media <= 7.0)
    {
       printf(" Voce vai fazer o exame!\n");
    } else {
       printf(" Voce foi Aprovado!\n");
    }
    return 0;
}

// Questão 12: Cálculo da média aritmética e verificação de aprovação com exame