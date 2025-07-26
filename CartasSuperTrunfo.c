#include <stdio.h>

int main(){

char estado[10], estado2[10];
char codigo[10], codigo2[10];
char cidade[20], cidade2[20];
int populacao, populacao2;
float area, area2;
float PIB, PIB2;
int PT, PT2;

printf("\n--- Dados da Carta 1 ---\n");

printf("Estado: ");
scanf("%s", estado);

printf("Codigo: ");
scanf("%s", codigo);

printf("Cidade: ");
scanf("%s", cidade);

printf("Populacao: ");
scanf("%d", &populacao);

printf("Area: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &PIB);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &PT);

printf("\n--- Dados da Carta 2 ---\n");

printf("Estado: ");
scanf("%s", estado2);

printf("Codigo: ");
scanf("%s", codigo2);

printf("Cidade: ");
scanf("%s", cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &PIB2);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &PT2);


return 0;

} 