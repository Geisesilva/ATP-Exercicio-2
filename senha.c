#include <stdio.h>
#include <string.h>

int main() {

    //declaração de variavel
    char senha[20];

    //entrada processamento e saida de dados
    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(senha, "ASDFG") == 0) {
        printf("Acesso Permitido!\n");
    } else {
        printf("Acesso Negado!\n");
    }

    return 0;
}

// Questão 3: Validação de senha, usei a variável char para armazenar a senha.