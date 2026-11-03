//busca binaria; exige array ordenado inicio meio fim
#include <stdio.h>

int busca_binaria(int v[], int n, int x) {
    int esq = 0;
    int dir = n - 1;
    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (v[meio] == x) {
            return meio;
        } else if (v[meio] < x) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1;
}