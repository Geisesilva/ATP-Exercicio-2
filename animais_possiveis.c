#include <stdio.h>
#include <string.h> // Para usar strcmp, já usados em outras questões.

int main() {
    char resp[10];

    printf("O animal eh mamifero? (s/n): ");
    scanf("%s", resp);

    if (strcmp(resp, "s") == 0) {
        printf("Eh quadrupede? (s/n): ");
        scanf("%s", resp);
        if (strcmp(resp, "s") == 0) {
            printf("Eh carnivoro? (s/n): ");
            scanf("%s", resp);
            if (strcmp(resp, "s") == 0)
                printf("O animal escolhido foi: Leao\n");
            else
                printf("O animal escolhido foi: Cavalo\n");
        } else {
            printf("Eh onivoro? (s/n): ");
            scanf("%s", resp);
            if (strcmp(resp, "s") == 0)
                printf("O animal escolhido foi: Homem\n");
            else
                printf("O animal escolhido foi: Macaco\n");
        }
    } else {
        printf("O animal eh ave? (s/n): ");
        scanf("%s", resp);
        if (strcmp(resp, "s") == 0) {
            printf("Eh nao-voadora? (s/n): ");
            scanf("%s", resp);
            if (strcmp(resp, "s") == 0) {
                printf("Eh tropical? (s/n): ");
                scanf("%s", resp);
                if (strcmp(resp, "s") == 0)
                    printf("O animal escolhido foi: Avestruz\n");
                else
                    printf("O animal escolhido foi: Pinguim\n");
            } else {
                printf("Eh nadadora? (s/n): ");
                scanf("%s", resp);
                if (strcmp(resp, "s") == 0)
                    printf("O animal escolhido foi: Pato\n");
                else
                    printf("O animal escolhido foi: Aguia\n");
            }
        } else {
            printf("O animal eh reptil com casco? (s/n): ");
            scanf("%s", resp);
            if (strcmp(resp, "s") == 0)
                printf("O animal escolhido foi: Tartaruga\n");
            else {
                printf("Eh carnivoro? (s/n): ");
                scanf("%s", resp);
                if (strcmp(resp, "s") == 0)
                    printf("O animal escolhido foi: Crocodilo\n");
                else
                    printf("O animal escolhido foi: Cobra\n");
            }
        }
    }

    return 0;
}

// Questão 30: Um programa que faça um questionário de sim/não para identificar um animal a partir de suas características.
/*Esse ficou bem grande, mas é um exercício interessante de lógica e uso de if/else, fiz algo parecido com portugol, mas em c usando if e else  
foi bem mais dificil. */ 