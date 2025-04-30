#include <stdio.h>

#define MAX 100

int caminho(int lab[MAX][MAX], int n, int m, int x, int y) {
    if (x < 0 || y < 0 || x >= n || y >= m || lab[x][y] != 0)
        return 0;
    lab[x][y] = 2;

    if (x == n - 1 && y == m - 1) {
        printf("(%d, %d)\n", x, y);
        return 1;
    }

    if (caminho(lab, n, m, x + 1, y) ||
        caminho(lab, n, m, x, y + 1) ||
        caminho(lab, n, m, x - 1, y) ||
        caminho(lab, n, m, x, y - 1)) {
        printf("(%d, %d)\n", x, y);
        return 1;
    }

    lab[x][y] = 0;
    return 0;
}