#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int esq, int meio, int dir) {
    int i, j, k;
    int n1 = meio - esq + 1;
    int n2 = dir - meio;

    int esqArr[n1], dirArr[n2];

    for (i = 0; i < n1; i++)
        esqArr[i] = arr[esq + i];
    for (j = 0; j < n2; j++)
        dirArr[j] = arr[meio + 1 + j];

    i = 0;
    j = 0;
    k = esq;
    while (i < n1 && j < n2) {
        if (esqArr[i] <= dirArr[j]) {
            arr[k] = esqArr[i];
            i++;
        }
        else {
            arr[k] = dirArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = esqArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = dirArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int esq, int dir) {
    if (esq < dir) {
      
        int meio = esq + (dir - esq) / 2;

        mergeSort(arr, esq, meio);
        mergeSort(arr, meio + 1, dir);

        merge(arr, esq, meio, dir);
    }
}

int mergeSortMain() {
    int n[] = {5, 3, 8, 1};
    int tamanho = sizeof(n) / sizeof(n[0]);
    
     mergeSort(n, 0, tamanho - 1);

    for (int i = 0; i < tamanho; i++)
        printf("%d ", n[i]);
    return 0;
}