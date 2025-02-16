#include <stdio.h>

int main() {
    float n, s = 0;
    int c = 0;
    while (1) {
        printf("Digite uma nota (negativa para parar): ");
        scanf("%f", &n);
        if (n < 0) break;
        s += n;
        c++;
    }
    printf("Média: %.2f\n", s / c);
    return 0;
}