#include <stdio.h>

int main() {
    int i = 1;
    int idade, maior, menor;
    char genero;
    float soma_mulheres = 0, media_mulheres;
    int cont_mulheres = 0, cont_homens = 0;

    while (i <= 10) {
        printf("\n--- Pessoa %d ---\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Gênero (F/M): ");
        scanf(" %c", &genero);  // espaço antes do %c evita problemas!

        // primeira pessoa define o maior e menor inicial
        if (i == 1) {
            maior = idade;
            menor = idade;
        }

        // verifica maior e menor
        if (idade > maior) maior = idade;
        if (idade < menor) menor = idade;

        // verifica gênero
        if (genero == 'F' || genero == 'f') {
            soma_mulheres += idade;
            cont_mulheres++;
        } else {
            cont_homens++;
        }

        i++;
    }

    // mostra os resultados
    printf("\n========= RESULTADOS =========\n");
    printf("Maior idade: %d anos\n", maior);
    printf("Menor idade: %d anos\n", menor);

    if (cont_mulheres > 0) {
        media_mulheres = soma_mulheres / cont_mulheres;
        printf("Média de idade das mulheres: %.2f anos\n", media_mulheres);
    } else {
        printf("Nenhuma mulher no grupo!\n");
    }

    printf("Número de homens: %d\n", cont_homens);

    return 0;
}