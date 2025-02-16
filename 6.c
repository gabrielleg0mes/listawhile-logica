#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Digite um número: ");
    scanf("%d", &n);
    int p[n+1];
    for (int j = 0; j <= n; j++) p[j] = 1;
    while (i * i <= n) {
        if (p[i]) {
            for (int j = i * i; j <= n; j += i) p[j] = 0;
        }
        i++;
    }
    printf("Números primos até %d: ", n);
    for (i = 2; i <= n; i++) if (p[i]) printf("%d ", i);
    printf("\n");
    return 0;
}