#include <stdio.h>
#include <stdlib.h>
void impressaoImpares(int n) {
    if (n < 1) {
        return;
    }
    impressaoImpares(n - 1);

    if (n % 2 != 0) {
        printf("%d ", n);
    }
}

int main() {
    int n;
    
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    impressaoImpares(n);
    return 0;
}