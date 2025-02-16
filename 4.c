#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int nc = (rand() % 100) + 1, n;
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n == nc) break;
        printf(n < nc ? "Maior\n" : "Menor\n");
    }
    printf("Acertou!\n");
    return 0;
}