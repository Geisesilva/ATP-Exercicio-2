#include <stdio.h>

int main() {

    // Declaração da variável 
    int angulo;

    scanf("%d", &angulo);

    // Entrada, processamento e saída de dados
    if (angulo > 360 || angulo < -360) {
        angulo = angulo % 360;
    }

    if (angulo >= 0 && angulo < 90)
        printf("1o quadrante\n");
    else if (angulo >= 90 && angulo < 180)
        printf("2o quadrante\n");
    else if (angulo >= 180 && angulo < 270)
        printf("3o quadrante\n");
    else if (angulo >= 270 && angulo <= 360)
        printf("4o quadrante\n");
    else if (angulo <= 0 && angulo > -90)
        printf("1o quadrante\n");
    else if (angulo <= -90 && angulo > -180)
        printf("2o quadrante\n");
    else if (angulo <= -180 && angulo > -270)
        printf("3o quadrante\n");
    else if (angulo <= -270 && angulo >= -360)
        printf("4o quadrante\n");

    return 0;
}

// Questão 17: Programa que lê um ângulo em graus e informa em qual quadrante ele se encontra.