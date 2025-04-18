#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[2], codigo1[4], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char estado2[2], codigo2[4], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro Carta 1
    printf("Cadastro Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %1s", estado1);

    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo1);

    getchar(); // Limpa o '\n' da entrada anterior
    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n' do final

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
    scanf(" %1s", estado2);

    printf("Codigo (ex: B02): ");
    scanf(" %3s", codigo2);

    getchar(); // Limpa o '\n' da entrada anterior
    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o '\n'

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bi): ");
    scanf("%f", &pib2);

    printf("Numero pontos turisticos: ");
    scanf("%d", &pontos2);

    // Mostra resultados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    printf("\nPressione ENTER para sair...");
    // Necessário dois por conta do \n acima
    getchar();
    getchar();

    return 0;
}
