#include <stdio.h>
#include <string.h>

void gerarParenteses(int n, int aberto, int fechado, char str[], int index) {
    if (index == 2 * n) {
        printf("%s\n", str);
        return;
    }
    if (aberto < n) {
        str[index] = '(';
        gerarParenteses(n, aberto + 1, fechado, str, index + 1);
    }
    if (fechado < aberto) {
        str[index] = ')';
        gerarParenteses(n, aberto, fechado + 1, str, index + 1);
    }
}