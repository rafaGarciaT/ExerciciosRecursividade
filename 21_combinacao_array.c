#include <stdio.h>

void combinar(int arr[], int n, int k, int index, int start, int comb[]) {
    if (index == k) {
        for (int i = 0; i < k; i++) {
            printf("%d ", comb[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i <= n - (k - index); i++) {
        comb[index] = arr[i];
        combinar(arr, n, k, index + 1, i + 1, comb);
    }
}