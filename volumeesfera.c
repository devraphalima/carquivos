#include <stdio.h>

int main(void) {
    double raio, volume;

    printf("Digite o raio da esfera: ");
    if (scanf("%lf", &raio) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    volume = (4.0 / 3.0) * 3.141592653589793 * raio * raio * raio;

    printf("O volume da esfera e: %.2f\n", volume);

    return 0;
}