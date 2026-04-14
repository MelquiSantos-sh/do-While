#include <stdio.h>

int main() {
    int i = 1;
    char genero, olhos, cabelos;
    int idade;
    int menor_idade = 0;
    int primeiro = 1;
    int cont_masc = 0;
    int cont_fem  = 0;

    printf("=== Pesquisa de Características Físicas ===\n");
    printf("Gênero:       M (Masculino)  F (Feminino)\n");
    printf("Olhos:        A (Azuis)  V (Verdes)  P (Pretos)  C (Castanhos)\n");
    printf("Cabelos:      L (Louros) C (Castanhos) P (Pretos)\n\n");

    while (i <= 50) {
        printf("--- Pessoa %d ---\n", i);

        printf("Genero (M/F): ");
        scanf(" %c", &genero);

        printf("Cor dos olhos (A/V/P/C): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L/C/P): ");
        scanf(" %c", &cabelos);

        printf("Idade: ");
        scanf("%d", &idade);

        // --- menor idade ---
        if (primeiro == 1) {
            menor_idade = idade;
            primeiro = 0;
        }
        if (idade < menor_idade) menor_idade = idade;

        // --- homens: 16-24, olhos azuis, cabelos castanhos ---
        if ((genero == 'M' || genero == 'm') &&
            (idade >= 16 && idade <= 24)      &&
            (olhos == 'A' || olhos == 'a')    &&
            (cabelos == 'C' || cabelos == 'c')) {
            cont_masc++;
        }

        // --- mulheres: <40, olhos pretos, cabelos pretos ---
        if ((genero == 'F' || genero == 'f') &&
            (idade < 40)                      &&
            (olhos == 'P' || olhos == 'p')    &&
            (cabelos == 'P' || cabelos == 'p')) {
            cont_fem++;
        }

        printf("\n");
        i++;
    }

    // mostra os resultados
    printf("========= RESULTADOS =========\n\n");

    printf("Menor idade do grupo: %d anos\n\n", menor_idade);

    printf("Homens (16-24 anos, olhos azuis, cabelos castanhos):\n");
    printf("→ %d pessoa(s)\n\n", cont_masc);

    printf("Mulheres (menos de 40 anos, olhos pretos, cabelos pretos):\n");
    printf("→ %d pessoa(s)\n", cont_fem);

    return 0;
}