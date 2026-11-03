#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("Digite um numero inteiro com 4 digitos: ");
    scanf("%d", &a);

    b = (a % 10) * 1000       // Pega o algarismo das unidades e o coloca nos milhares.
        + ((a / 10) % 10) * 100   // Pega o algarismo das dezenas e o coloca nas centenas.
        + ((a / 100) % 10) * 10   // Pega o algarismo das centenas e o coloca nas dezenas.
        + (a / 1000);          // Pega o algarismo dos milhares e o coloca nas unidades.

    printf("Numero invertido: %d\n", b);
    return 0;
}