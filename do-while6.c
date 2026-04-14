#include <stdio.h>

int main() {
    float notaA, notaB, media;
    char resposta;
    int aluno = 1;

    do {
        printf("\nAluno %d\n", aluno);

        printf("Entre com a nota A: ");
        scanf("%f", &notaA);

        printf("Entre com a nota B: ");
        scanf("%f", &notaB);

        media = (notaA * 1 + notaB * 2) / 3;
        printf("Media do aluno %d = %.1f\n", aluno, media);

        // loop de validação da resposta
        do {
            printf("Continuar (s/n) ? ");
            scanf(" %c", &resposta);

            if (resposta != 's' && resposta != 'n') {
                printf("ERRO: Resposta invalida!\n");
            }

        } while (resposta != 's' && resposta != 'n');

        aluno++;

    } while (resposta == 's');

    return 0;
}