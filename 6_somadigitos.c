#include <stdio.h>
#include <stdlib.h>

int somaDigito(int n) {
    if (n == 0) {
        return n;
    }
    return n % 10 + somaDigito(n / 10);
}
int soma_digito_main() {
    int n, soma;
    
    printf("Digite o numero para somar cada digito: ");
    scanf("%d", &n);
    soma = somaDigito(n);
    printf("O resultado é: %d", soma);
    return 0;
}
