#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nRainhas(int n, int linha, int* pos) {
    if (linha == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                printf(j == pos[i] ? "Q " : ". ");
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int col = 0; col < n; col++) {
        int valido = 1;
        for (int i = 0; i < linha; i++)
            if (pos[i] == col || abs(pos[i] - col) == abs(i - linha)) {
                valido = 0;
                break;
            }
        if (valido) {
            pos[linha] = col;
            nRainhas(n, linha + 1, pos);
        }
    }
}