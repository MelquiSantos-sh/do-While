#include <stdio.h>

int main() {
    int i = 1;
    int ant2 = 1;    // primeiro termo
    int ant1 = 1;    // segundo termo
    int atual;

    printf("Série de Fibonacci com 15 termos:\n\n");

    // imprime os dois primeiros direto
    printf("Termo  1 → 1\n");
    printf("Termo  2 → 1\n");

    i = 3;
    while (i <= 15) {
        atual = ant2 + ant1;       // soma os dois anteriores
        printf("Termo %2d → %d\n", i, atual);

        ant2 = ant1;               // ant2 avança uma casa
        ant1 = atual;              // ant1 avança uma casa

        i++;
    }

    return 0;
}