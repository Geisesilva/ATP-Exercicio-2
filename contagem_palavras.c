#include <stdio.h>
#include <string.h> // para usar strlen, pesquisei para usar a biblioteca.
#include <ctype.h> // para usar tolower, pesquisei para entender melhor como usar essa biblioteca.

int main() {

    // Declaração das variáveis
    char frase[1000];
    int i, cont = 0;
    int dentro_palavra = 0; 

    // Entrada, processamento e saída de dados
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ' && frase[i] != '\n' && frase[i] != '\t') {
            if (!dentro_palavra) {
                cont++;
                dentro_palavra = 1;
            }
        } else {
            dentro_palavra = 0; 
        }
    }

    printf("Numero de palavras: %d\n", cont);

    return 0;
}

// Questão 22: Um programa que conte o número de palavras em uma frase fornecida pelo usuário.
// A pesquisa sobre as funções e bibliotecas foi bem espeficica para esses comandos usados, mas vou expandir depois.

