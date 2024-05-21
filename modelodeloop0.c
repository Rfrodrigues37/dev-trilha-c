#include <stdio.h>

int main() {
    int input = -1;

    // Loop while
    while (input != 0) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &input);
    }

    printf("Programa encerrado.\n");
    return 0;
}