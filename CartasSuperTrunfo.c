#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[60], nome2[60];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    
    // Entrada de dados para a primeira cidade
    printf("Digite o estado da primeira cidade: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira cidade (Ex: A01): ");
    scanf(" %s", codigo1);
    
    printf("Digite o nome da primeira cidade: ");
    scanf(" %s", nome1);
    
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da primeira cidade : ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da primeira cidade : ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos1);
    
    // Entrada de dados para a segunda cidade
    printf("\nDigite o estado da segunda cidade: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda cidade (Ex: B02): ");
    scanf(" %s", codigo2);
    
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", nome2);
    
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da segunda cidade : ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos2);
    
    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1  / populacao1;
    
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2  / populacao2;
    
    // Exibição dos resultados para a primeira cidade
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB per Capita: %.2f \n", pib_per_capita1);
    
    // Exibição dos resultados para a segunda cidade
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f \n", pib_per_capita2);
    
    return 0;
}
