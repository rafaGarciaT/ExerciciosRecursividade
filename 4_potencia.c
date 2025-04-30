#include <stdio.h>
#include <stdlib.h>

int potencia(int numero, int npotencia) {
    if (npotencia == 1) {
        return numero;
    }
    return numero * potencia(numero, npotencia - 1);
}

int potencia_main() {
    int n, x, resultado;
    
    printf("Digite um numero para calcular a potencia: ");
    scanf("%d", &n);
    printf("\nAgora, digite a potencia: ");
    scanf("%d", &x);
    resultado = potencia(n,x);
    printf("\nO resultado é: %d", resultado);

    return 0;
}
