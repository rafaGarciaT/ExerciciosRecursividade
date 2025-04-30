#include <stdio.h>

unsigned int paraBinario(unsigned int n) {
    if (n == 0)
        return 0;
    return (n % 2) + 10 * paraBinario(n / 2);
}