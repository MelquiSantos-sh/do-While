#include <stdio.h>

int main() {
    char genero, resposta;
    int idade;
    float peso;

    int maior_idade_f = 0, menor_idade_m = 0;
    float maior_peso = 0, menor_peso = 0;

    int cont_mulheres = 0, cont_homens = 0;
    int primeiro_f = 1;   // flag: 1ª mulher ainda não foi lida
    int primeiro_m = 1;   // flag: 1º homem ainda não foi lido
    int primeiro = 1;     // flag: 1ª pessoa ainda não foi lida

    printf("=== Estatísticas do Grupo ===\n");

    do {
        // lê os dados
        printf("\nGênero (F/M): ");
        scanf(" %c", &genero);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Peso (kg): ");
        scanf("%f", &peso);

        // --- maior e menor peso (qualquer gênero) ---
        if (primeiro == 1) {
            maior_peso = peso;
            menor_peso = peso;
            primeiro = 0;
        }
        if (peso > maior_peso) maior_peso = peso;
        if (peso < menor_peso) menor_peso = peso;

        // --- mulher mais velha ---
        if (genero == 'F' || genero == 'f') {
            cont_mulheres++;
            if (primeiro_f == 1) {
                maior_idade_f = idade;
                primeiro_f = 0;
            }
            if (idade > maior_idade_f) maior_idade_f = idade;
        }

        // --- homem mais novo ---
        if (genero == 'M' || genero == 'm') {
            cont_homens++;
            if (primeiro_m == 1) {
                menor_idade_m = idade;
                primeiro_m = 0;
            }
            if (idade < menor_idade_m) menor_idade_m = idade;
        }

        // pergunta se continua
        do {
            printf("Deseja continuar? (s/n): ");
            scanf(" %c", &resposta);
            if (resposta != 's' && resposta != 'S' &&
                resposta != 'n' && resposta != 'N') {
                printf("ERRO: Resposta inválida!\n");
            }
        } while (resposta != 's' && resposta != 'S' &&
                 resposta != 'n' && resposta != 'N');

    } while (resposta == 's' || resposta == 'S');

    // mostra os resultados
    printf("\n========= RESULTADOS =========\n");
    printf("Total de pessoas: %d\n\n", cont_mulheres + cont_homens);

    if (cont_mulheres > 0) {
        printf("Mulher mais velha:    %d anos\n", maior_idade_f);
    } else {
        printf("Nenhuma mulher no grupo!\n");
    }

    if (cont_homens > 0) {
        printf("Homem mais novo:      %d anos\n", menor_idade_m);
    } else {
        printf("Nenhum homem no grupo!\n");
    }

    printf("Pessoa com maior peso: %.1f kg\n", maior_peso);
    printf("Pessoa com menor peso: %.1f kg\n", menor_peso);

    return 0;
}