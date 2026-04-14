#include <stdio.h>

int main() {
    int inicio, fim, i;

    printf("Entre com o numero inicial da contagem: ");
    scanf("%d", &inicio);

    printf("Entre com o numero final da contagem: ");
    scanf("%d", &fim);

    i = inicio;
    while (i <= fim) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
