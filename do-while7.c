#include <stdio.h>

int main() {
    char resposta;
    int total = 0;
    int atletico = 0, coritiba = 0, foz = 0;

    printf("=== Pesquisa de Torcedores do Paraná ===\n");
    printf("A - Atlético  |  C - Coritiba  |  F - Foz  |  S - Sair\n\n");

    do {
        printf("Digite o time que torce: ");
        scanf(" %c", &resposta);

        if (resposta == 'A' || resposta == 'a') {
            atletico++;
            total++;
        } else if (resposta == 'C' || resposta == 'c') {
            coritiba++;
            total++;
        } else if (resposta == 'F' || resposta == 'f') {
            foz++;
            total++;
        } else if (resposta != 'S' && resposta != 's') {
            printf("ERRO: Opção inválida! Use A, C, F ou S.\n");
        }

    } while (resposta != 'S' && resposta != 's');

    // mostra os resultados
    printf("\n========= RESULTADOS =========\n");

    if (total > 0) {
        printf("Total de entrevistados: %d\n\n", total);

        printf("Atlético:  %d torcedores (%.1f%%)\n",
               atletico, (float)atletico / total * 100);

        printf("Coritiba:  %d torcedores (%.1f%%)\n",
               coritiba, (float)coritiba / total * 100);

        printf("Foz:       %d torcedores (%.1f%%)\n",
               foz, (float)foz / total * 100);
    } else {
        printf("Nenhum torcedor entrevistado!\n");
    }

    return 0;
}