#include <stdio.h>

int main() {
    char nome [50];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("boas vindas, %s", nome);
    return 0;
}