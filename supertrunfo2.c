#include <stdio.h>

// Desafio Super Trunfo - Países - Nível Aventureiro
// Cadastro de duas cartas com atributos: População, Área, PIB, Pontos Turísticos
// Cálculo de Densidade Populacional e PIB per capita

int main() {
    // Variáveis para a primeira carta
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    // Variáveis para a segunda carta
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo dos atributos da primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos atributos da segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB (em bilhões): %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f bilhões/hab\n", pib_per_capita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB (em bilhões): %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f bilhões/hab\n", pib_per_capita2);

    return 0;
}
