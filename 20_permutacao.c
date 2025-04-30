#include <stdio.h>
#include <string.h>

void permutacao(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            char tmp = str[l];
            str[l] = str[i];
            str[i] = tmp;

            permuta(str, l + 1, r);

            tmp = str[l];
            str[l] = str[i];
            str[i] = tmp;
        }
    }
}