#include <stdio.h>

int contarChar(const char *str, char c) {
    if (*str == '\0') {
        return 0;
    }
    if (*str == c) {
        return 1 + contarChar(str + 1, c);
    } else {
        return contarChar(str + 1, c);
    }
}

int contarCaractereMain() {
    const char *texto = "abracadabra";
    char caractere = 'a';
    printf("%d", contarChar(texto, caractere));

    return 0;
}