#include <stdio.h>

int main() {
    char codigo1[100], codigo2[100];
    char nomeDacidade1[100], nomeDacidade2[100];
    int populacao1[20000], populacao2[20000];
    int numerosDepontosTuristicos1, numerosDepontosTuristicos2;
    float area1, area2;
    float pib1, pib2;

    printf("Desafio super trunfo\n");
    printf("Escreva o código da primeira carta: \n");
    scanf("%s", codigo1);
    printf("Escreva o nome da cidade: \n");
    scanf("%99s", nomeDacidade1);
    printf("Digite a quantidade de população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &numerosDepontosTuristicos1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1); 

    printf("\n");

    printf("Escreva o código da segunda carta: \n");
    scanf("%s", codigo2);
    printf("Escreva o nome da cidade: \n");
    scanf("%99s", nomeDacidade2);
    printf("Digite a quantidade de população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &numerosDepontosTuristicos2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("\n");
    printf("Cartas cadastradas com sucesso!");

    return 0;
}
