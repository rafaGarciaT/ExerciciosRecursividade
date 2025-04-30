#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n == 0) {
    return 1;
    } else {
    return n * fatorial(n - 1); 
    }
}

int fatorial_main() {
    int n;
    n = fatorial(10);
    printf("%d", n);
}