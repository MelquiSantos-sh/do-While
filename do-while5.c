#include <stdio.h>

int main() {
    int n;

    do {
        printf("Entre com um numero entre 0 e 10: ");
        scanf("%d", &n);
    } while (n >= 0 && n <= 10);

    printf("Numero fora do intervalo!\n");

    return 0;
}