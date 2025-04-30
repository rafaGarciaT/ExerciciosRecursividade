#include <stdio.h>
#include <stdlib.h>

int buscaArray(int n[], int i, int nProcurar, int tamanho) {
    if (i >= tamanho) {
        return 0;
    }
    if (n[i] == nProcurar) {
        return 1;
    } else {
        return buscaArray(n, i + 1, nProcurar, tamanho);
    }
}
int buscaArrayMain() {
    int n[] = {2, 4, 6, 8};
    int tamanho = sizeof(n) / sizeof(n[0]);
    
    printf("%d", buscaArray(n, 0, 10, tamanho));
    return 0;
}