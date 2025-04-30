#include <stdio.h>
#include <string.h>

void inverter(char str[], int extremidadeEsquerda, int extremidadeDireita) {
    if (extremidadeEsquerda >= extremidadeDireita) {
        return;
    }
    char strTemp = str[extremidadeEsquerda];
    str[extremidadeEsquerda] = str[extremidadeDireita];
    str[extremidadeDireita] = strTemp;
    
    inverter(str, extremidadeEsquerda + 1, extremidadeDireita - 1);
}
int inverter_main() {
    char str[50], str1[50];
    printf("Digite a frase que deseja inverter: ");
    scanf("%s", str);
    inverter(str, 0, strlen(str) - 1);
    printf("%s", str);
}