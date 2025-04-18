#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro Carta 1
    printf("Cadastro Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado1);

    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo1);

    getchar();
    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bi): ");
    scanf("%f", &pib1);

    printf("Numero pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro Carta 2
    printf("\nCadastro Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado2);

    printf("Codigo (ex: B02): ");
    scanf(" %3s", codigo2);

    getchar();
    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bi): ");
    scanf("%f", &pib2);

    printf("Numero pontos turisticos: ");
    scanf("%d", &pontos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Mostra os dados
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação usando PIB per capita
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s: R$ %.2f\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s: R$ %.2f\n", cidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
