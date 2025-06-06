#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para cada carta
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição das densidades e PIB per capita
    printf("\nDados calculados:\n");

    printf("Carta 1 - %s:\n", nomeCidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões de reais/habitante\n", pibPerCapita1);

    printf("\nCarta 2 - %s:\n", nomeCidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões de reais/habitante\n", pibPerCapita2);

    // Comparação das cartas com base no atributo escolhido: População
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);

    // Estrutura de decisão para determinar a vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! As duas cartas possuem a mesma população.\n");
    }

    return 0;
}
