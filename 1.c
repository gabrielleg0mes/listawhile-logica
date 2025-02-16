#include <stdio.h>

int main() {
    int n, s = 0;
    while (1) {
        printf("Digite um número (0 para parar): ");
        scanf("%d", &n);
        if (n == 0) break;
        s += n;
    }
    printf("Soma: %d\n", s);
    return 0;
}