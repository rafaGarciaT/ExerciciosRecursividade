#include <stdio.h>
#include <stdlib.h>

void impressaoPares(int n) {
    if (n < 0) {
        return;
    }
    impressaoPares(n - 1);
    if (n % 2 == 0) {
        printf("%d ", n);
    }
}

int impressaoParesMain() {
    int n;    
    printf("Digite o numero: ");
    scanf("%d", &n);
    impressaoPares(n);
    return 0;
}