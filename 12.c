#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }
    printf("Soma dos dígitos: %d\n", s);
    return 0;
}
