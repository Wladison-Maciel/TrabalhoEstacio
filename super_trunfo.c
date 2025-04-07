#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    printf("\n");

    // Entrada dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    printf("\n=== Comparação de Cartas ===\n");

    printf("População: %s venceu (%d)\n", 
           populacao1 > populacao2 ? "Carta 1" : "Carta 2", 
           populacao1 > populacao2 ? 1 : 0);

    printf("Área: %s venceu (%d)\n", 
           area1 > area2 ? "Carta 1" : "Carta 2", 
           area1 > area2 ? 1 : 0);

    printf("PIB: %s venceu (%d)\n", 
           pib1 > pib2 ? "Carta 1" : "Carta 2", 
           pib1 > pib2 ? 1 : 0);

    printf("Pontos Turísticos: %s venceu (%d)\n", 
           pontosTuristicos1 > pontosTuristicos2 ? "Carta 1" : "Carta 2", 
           pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    printf("Densidade Populacional: %s venceu (%d)\n", 
           densidade1 < densidade2 ? "Carta 1" : "Carta 2", 
           densidade1 < densidade2 ? 1 : 0);

    printf("PIB per Capita: %s venceu (%d)\n", 
           pibPerCapita1 > pibPerCapita2 ? "Carta 1" : "Carta 2", 
           pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    printf("Super Poder: %s venceu (%d)\n", 
           superPoder1 > superPoder2 ? "Carta 1" : "Carta 2", 
           superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
