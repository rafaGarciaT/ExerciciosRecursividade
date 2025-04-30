#include <stdio.h>

int somaElementos(int array[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    } else {
        return array[tamanho - 1] + somaElementos(array, tamanho - 1);
    }
}

int somaElementosMain() {
    int n[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(n) / sizeof(n[0]);

    printf("%d", somaElementos(n, tamanho));

    return 0;
}