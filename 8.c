#include <stdio.h>

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Sequência de Collatz: ");
    while (n != 1) {
        printf("%d, ", n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    printf("1\n");
    return 0;
}
