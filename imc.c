#include <stdio.h>


int main() {
	
	float peso, altura, imc;
	
	

	printf("diga seu peso: ");
	
	scanf("%f", &peso);
	
	



	printf("diga sua altura: ");
	
	scanf("%f", &altura);
	


    imc = peso/(altura*altura);

	



	printf("seu imc é igual a %.2f", imc); //%.2f mostra duas casas


	return 0;


}