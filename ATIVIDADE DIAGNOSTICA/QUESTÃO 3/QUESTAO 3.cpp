#include <stdio.h>

int main() {
    int valor;

    	printf("Qual valor a ser sacado?: ");
    	scanf("%d", &valor);

    if (valor < 2 || valor % 2 != 0) {
        printf("Erro: Nao pode moedas.\n");
    } else {
        printf("Cedulas entregues:\n");

        printf("100: %d\n", valor / 100);
        valor = valor % 100;

        printf("50: %d\n", valor / 50);
        valor = valor % 50;

        printf("20: %d\n", valor / 20);
        valor = valor % 20;

        printf("10: %d\n", valor / 10);
        valor = valor % 10;

        printf("5: %d\n", valor / 5);
        valor = valor % 5;

        printf("2: %d\n", valor / 2);
        valor = valor % 2;
    }

    return 0;
}
