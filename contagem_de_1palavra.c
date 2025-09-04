#include <stdio.h>
#include <string.h> // para usar strlen e strstr, pesquisei para entender melhor como usar essa biblioteca.

int main() {

    // Declaração das variáveis
    char frase[1000];
    char *ptr;
    int cont = 0;

    // Entrada, processamento e saída de dados
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    ptr = frase;
    while ((ptr = strstr(ptr, "aula")) != NULL) {
        cont++;
        ptr += 4; 
    }

    printf("A palavra 'aula' apareceu %d vezes.\n", cont);

    return 0;
}

// Questão 23: Um programa que conte quantas vezes a palavra "aula" aparece em uma frase fornecida pelo usuário.