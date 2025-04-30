#include <stdio.h>
#include <stdlib.h>

int checarNumeroPrimo(int n, int divisor) {
    if (n <= 1) {
        return 0;
    }
    if (divisor * divisor > n) {
        return 1;
    }
    if (n % divisor == 0) {
        return 0;
    }
    return checarNumeroPrimo(n, divisor + 1);
}
int checarNumeroPrimoMain() {
    int n;
    
    printf("Digite o primeiro numero para checar se e primo: ");
    scanf("%d", &n);
    printf("%d", checarNumeroPrimo(n, 2));
    return 0;
}