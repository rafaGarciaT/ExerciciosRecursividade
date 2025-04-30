#include <stdio.h>

void encontrarCaminho(int x1, int y1, int x2, int y2) {
    printf("(%d, %d)\n", x1, y1);

    if (x1 == x2 && y1 == y2) {
        return; 
    }

    if (x1 < x2) {
        encontrarCaminho(x1 + 1, y1, x2, y2); 
    } else if (y1 < y2) {
        encontrarCaminho(x1, y1 + 1, x2, y2);
    }
}
