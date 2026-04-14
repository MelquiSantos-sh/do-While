#include <stdio.h>

int main() {
    int idade;
    char gostou, recomenda;
    int total_espectadores = 0;
    int total_votos = 0;
    int total_recomendacoes = 0;

    printf("=== Pesquisa de Satisfação de Filme ===\n");
    printf("(Digite 0 na idade para encerrar)\n\n");

    printf("Idade do espectador: ");
    scanf("%d", &idade);

    while (idade != 0) {

        printf("Gostou do filme? [S/N]: ");
        scanf(" %c", &gostou);

        printf("Recomendaria o filme? [S/N]: ");
        scanf(" %c", &recomenda);

        // conta espectador
        total_espectadores++;

        // conta votos positivos
        if (gostou == 'S' || gostou == 's') {
            total_votos++;
        }

        // conta recomendações
        if (recomenda == 'S' || recomenda == 's') {
            total_recomendacoes++;
        }

        // lê o próximo espectador
        printf("\nIdade do espectador: ");
        scanf("%d", &idade);
    }

    // mostra os resultados
    printf("\n========= RESULTADOS =========\n");

    if (total_espectadores > 0) {
        printf("Total de espectadores: %d\n", total_espectadores);
        printf("Total de votos positivos: %d\n", total_votos);
        printf("Total de recomendações: %d\n", total_recomendacoes);
    } else {
        printf("Nenhum espectador registrado!\n");
    }

    return 0;
}