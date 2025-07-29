#include <stdio.h>

int main(){

    char estado[10], estado2[10];
    char codigo[10], codigo2[10];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int PT, PT2;
    float densidade, densidade2;
    float percapita, percapita2;
    float superPoder, superPoder2;

    printf("\n--- Dados da Carta 1 ---\n");

    printf("Estado: ");
    scanf("%s", estado);

    printf("Codigo: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("Populacao: ");
    scanf("%lu", &populacao);

    printf("Area (km²): ");
    scanf("%f", &area);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &PIB);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PT);

    densidade = populacao / area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);

    PIB *= 1000000000; // Multiplicando PIB por 1 bilhão para ajustar para reais
    percapita = PIB / populacao;
    printf("PIB Per Capita: %.2f reais\n", percapita);

    superPoder = populacao + area + PIB + PT + percapita + (1.0f / densidade);
    printf("Super Poder: %.1f \n", superPoder);

    printf("\n--- Dados da Carta 2 ---\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PT2);

    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    PIB2 *= 1000000000; // Multiplicando PIB por 1 bilhão para ajustar para reais
    percapita2 = PIB2 / populacao2;
    printf("PIB Per Capita: %.2f reais\n", percapita2);

    superPoder2 = populacao2 + area2 + PIB2 + PT2 + percapita2 + (1.0f / densidade2);
    printf("Super Poder: %.1f \n", superPoder2);

    //comparações
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");
    printf("População: Carta 1 venceu? %d\n", populacao > populacao2);
    printf("Area: Carta 1 venceu? %d\n", area > area2);
    printf("PIB: Carta 1 venceu? %d\n", PIB > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu? %d\n", PT > PT2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n", densidade < densidade2);
    printf("PIB Per Capita: Carta 1 venceu? %d\n", percapita > percapita2);
    printf("Super Poder: Carta 1 venceu? %d\n", superPoder > superPoder2);

    return 0;

} 