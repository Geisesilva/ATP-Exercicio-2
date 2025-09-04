#include <stdio.h>

int main() {

    //declaração de variavel
    int idade;

    // entrada, processamento e saida de dados
    printf("Qual sua Idade? ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Maior de Idade");
    }else {
        printf("Menor de Idade");
    }
    return 0;
}

// Questão 4: Verificar se uma pessoa é maior ou menor de idade