#include <stdio.h>

void gerarSubconjuntos(int arr[], int n, int indice, int subconjunto[], int tamanho) {
    if (indice == n) {
        printf("{ ");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", subconjunto[i]);
        }
        printf("}\n");
        return;
    }