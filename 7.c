#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    printf("MDC: %d\n", a);
    return 0;
}
