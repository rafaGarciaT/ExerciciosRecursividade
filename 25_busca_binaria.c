#include <stdio.h>

int busca_binaria(int arr[], int inicio, int fim, int alvo) {
    if (inicio > fim)
        return -1;

    int meio = inicio + (fim - inicio) / 2;

    if (arr[meio] == alvo)
        return meio;
    else if (arr[meio] > alvo)
        return busca_binaria(arr, inicio, meio - 1, alvo);
    else
        return busca_binaria(arr, meio + 1, fim, alvo);
}