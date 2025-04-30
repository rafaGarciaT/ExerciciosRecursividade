#include <stdio.h>
#include <stdlib.h>

void regressiva(int n) {
    printf("%d\n", n);
    if (n > 0) {
        regressiva(n - 1);
    }
}
int regressiva_main() {
    int n;
    
    printf("Digite o primeiro numero da regressiva: ");
    scanf("%d", &n);
    regressiva(n);
    return 0;
}
