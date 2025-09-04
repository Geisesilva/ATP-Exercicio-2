#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaracao de variaveis
    int a, b, c;
    float delta, x1, x2;

    //entrada, processamento e saida de dados
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);    

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    delta = (b*b) - 4*a*c;

    if(delta < 0){
        printf("A equacao nao possui raizes reais.\n");
    } else if(delta == 0){
        x1 = -b / (2.0 * a);
        printf("A equacao possui uma raiz real: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("A equacao possui duas raizes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}

// Questão 20: Um programa de calculo de equações do segundo grau (ax2 + bx + c = 0).