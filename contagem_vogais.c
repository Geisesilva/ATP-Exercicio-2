#include <stdio.h>
#include <string.h> // para usar strlen, como sugerido em sala de aula, pesquisei para entender melhor como usar essa biblioteca.

int main() {

    // Declaração das variáveis
    char frase[100];
    int i, cont = 0;

    // Entrada, processamento e saída de dados
    printf("Escreva uma frase: ");
     fgets(frase, sizeof(frase), stdin); // fiz uma brevepesquisa sobre essa estrutura, achei bem interessante e facil de entender, ela serve para ler a frase com espaços

    for (i = 0; i < strlen(frase); i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
        }
    }
    printf("Numero de vogais: %d\n", cont);

    return 0;
}

// Questão 21: Um programa que conte o número de vogais em uma frase fornecida pelo usuário.
// Atenção! Não use letras com acentos, o programa não lê, a contagem de palavras ficara errada.