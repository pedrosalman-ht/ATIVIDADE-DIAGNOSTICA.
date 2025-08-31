#include <stdio.h>
#include <stdlib.h>

int main() {
    int desconhecido = rand() % 100 + 1;
    int tentativa = 0;

    printf("Tente adivinhar o numero secreto entre 1 e 100:\n");

    while (tentativa != desconhecido) {
        scanf("%d", &tentativa);

        if (tentativa > desconhecido)
            printf("Muito alto, tente um numero menor!\n");
        else if (tentativa < desconhecido)
            printf("Muito baixo, tente um numero maior!\n");
        else
            printf("Parabens, voce acertou!");
    }

    return 0;
}

