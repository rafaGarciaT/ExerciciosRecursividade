#include <stdio.h>

int multiplica(int n1, int n2) {
    if (n2 == 0) {
        return 0;
    }
    return n1 + multiplica(n1, n2 - 1);
}
int multiplicacaoMain() {
    int n1, n2, resultado;
    printf("Digite o primeiro numero da multiplicacao: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero da multiplicacao: ");
    scanf("%d", &n2);
    resultado = multiplica(n1, n2);
    printf("\nO resultado da multiplicacao e: %d", resultado);
    return 0;
}