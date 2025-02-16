#include <stdio.h>

int main() {
    int n, r, p = 1, b = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 2;
        b += r * p;
        p *= 10;
        n /= 2;
    }
    printf("Binário: %d\n", b);
    return 0;
}
