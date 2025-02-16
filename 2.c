#include <stdio.h>

int main() {
    char senha[] = "1234";
    char entrada[5];
    int correto = 0;

    while (!correto) {
        printf("Digite a senha: ");
        scanf("%s", entrada);

        int i = 0;
        correto = 1;
        while (entrada[i] != '\0' || senha[i] != '\0') {
            if (entrada[i] != senha[i]) {
                correto = 0;
                break;
            }
            i++;
        }
    }
    printf("Acesso permitido.\n");
    return 0;
}
