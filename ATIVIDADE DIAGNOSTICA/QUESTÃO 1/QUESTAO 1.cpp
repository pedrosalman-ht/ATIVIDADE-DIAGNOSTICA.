#include <stdio.h>

 int main() {
    float a, b, c;

    
    printf("Qual o valor do lado A? ");
    scanf("%f", &a);

    printf("Qual o valor do lado B? ");
    scanf("%f", &b);

    printf("Qual o valor do lado C? ");
    scanf("%f", &c);

   
    if (a < b + c && b < a + c && c < a + b) {
        printf("Os valores que voce digitou formam um triangulo.\n");

        
        if (a == b && b == c) {
            printf("O triangulo e Equilatero.");
        } else if (a == b || a == c || b == c) {
            printf("O triangulo e Isosceles.");
        } else {
            printf("O triangulo e Escaleno.");
        }
    } else {
        printf("Os valores que voce digitou nao formam um triangulo.");
    }

    return 0;
}
