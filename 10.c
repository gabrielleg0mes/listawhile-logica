#include <stdio.h>

int main() {
    int n, i = 1;
    float s = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    while (i <= n) {
        s += 1.0 / i;
        i++;
    }
    printf("Soma: %.2f\n", s);
    return 0;
}
