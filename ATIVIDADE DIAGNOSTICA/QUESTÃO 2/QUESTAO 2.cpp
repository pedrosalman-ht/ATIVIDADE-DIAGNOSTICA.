#include <stdio.h>

	int main() {
    float peso, altura, imc;

    
    	printf("Informe o peso: ");
    	scanf("%f", &peso);

    	printf("Informe a altura: ");
    		scanf("%f", &altura);
	
    imc = peso / (altura * altura);

    
    	printf("Seu IMC = %.2f\n", imc);

    
    if (imc < 18.5) {
        printf("Voce esta abaixo do peso");
    } else if (imc < 25) {
        printf("Voce esta com peso normal");
    } else if (imc < 30) {
        printf("Voce esta sobrepeso");
    } else if (imc < 35) {
        printf("Obesidade grau I");
    } else if (imc < 40) {
        printf("Obesidade grau II");
    } else {
        printf("Obesidade grau III");
    }

    return 0;
}
