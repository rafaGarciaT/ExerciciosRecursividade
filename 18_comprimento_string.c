#include <stdio.h>

int comprimentoString(const char *s) {
    if (*s == '\0')
        return 0;
    return 1 + comprimentoString(s + 1);
}