#include <stdio.h>

int main(){

    //declaração de variáveis
    float n1, n2, n3, n4, media;

    //entrada, processamento e saida de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 7)
    {
       printf(" Voce foi Aprovado!\n");
    } else {
       printf(" Voce foi Reprovado!\n");
    }
    
    return 0;
}

// Questão 1: Cálculo da média aritmética e verificação de aprovação