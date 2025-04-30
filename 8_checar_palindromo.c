#include <stdio.h>
#include <string.h>

int checarPalindromo(char str[], char str1[], int extremidadeEsquerda, int extremidadeDireita) {
    if (extremidadeEsquerda >= extremidadeDireita) {
        if (strcmp(str, str1) == 0) {
            return 1;
        } else {
            return 0;
        }
    }
    char strTemp = str[extremidadeEsquerda];
    str[extremidadeEsquerda] = str[extremidadeDireita];
    str[extremidadeDireita] = strTemp;
    return checarPalindromo(str, str1, extremidadeEsquerda + 1, extremidadeDireita - 1);
}
int checarPalindromoMain() {
    char str[50], str1[50];
    printf("Digite a frase que deseja checar como palindromo: ");
    scanf("%s", str);
    strcpy(str1, str);
    printf("%i", checarPalindromo(str, str1, 0, strlen(str) - 1));
}