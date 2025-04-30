#include <stdio.h>

double potenciaRapida(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / potenciaRapida(x, -n);

    if (n % 2 == 0) {
        double meio = potenciaRapida(x, n / 2);
        return meio * meio;
    } else {
        return x * potenciaRapida(x, n - 1);
    }
}
