#include <stdio.h>

int main() {
    float ch = 1.70, ju = 1.10;
    int a = 0;
    while (ju <= ch) {
        ch += 0.02;
        ju += 0.03;
        a++;
    }
    printf("Anos necessários: %d\n", a);
    return 0;
}
