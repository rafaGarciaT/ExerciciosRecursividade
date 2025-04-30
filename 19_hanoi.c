#include <stdio.h>
#include <string.h>

void hanoi(int n, char a, char b, char c){
    if (n == 0) {
        return;
    }
        hanoi(n-1,a,c,b);
        printf("Mover de %c para %c\n", a, b);
        hanoi(n-1,c,b,a);
    }
int hanoiMain() {
    hanoi(3, 'A', 'C', 'B');
    
}