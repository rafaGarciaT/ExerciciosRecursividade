#include <stdio.h>

int soma(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + soma(n - 1);
    }
}

int soma_main() {
    printf("%d", soma(3));
}