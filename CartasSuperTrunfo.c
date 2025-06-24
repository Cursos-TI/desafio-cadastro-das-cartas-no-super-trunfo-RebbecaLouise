#include <stdio.h>

int main() {
    
    char estado, codigo[4], cidade[30];
    int populacao, pturisticos;
    float area, pib, densidade, pibper;


    //Carta 1
    printf("Carta 1:\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o código: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pturisticos);

    densidade = (float) populacao / area;
    pibper = (float) pib * 1000000000 / populacao;  // multiplicação por 1 bilhao para obter o numero absoluto em reais
 
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibper);

    printf("\n");

    //Carta 2
    printf("Carta 2:\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o código: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pturisticos);

    densidade = (float) populacao / area;
    pibper = (float) pib * 100000000 / populacao;   // multiplicação por 1 bilhao para obter o numero absoluto em reais

    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibper);
    

    return 0;

}
                                                                                                                                                    