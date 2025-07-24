#include <stdio.h>

int main(){

printf("\n--- Dados da Carta 1 ---\n");

char estado[50], estado2[50];
char codigo[50], codigo2[50];
char cidade[50], cidade2[50];
int populacao, populacao2;
float area, area2;
float PIB, PIB2;
int NumeroPT, NumeroPT2;

printf("estado: ");
scanf("%s", estado);

printf("codigo: ");
scanf("%s", codigo);

printf("cidade: ");
scanf("%s", &cidade);

printf("populacao: ");
scanf("%d", &populacao);

printf("area: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &PIB);

printf("NumeroPT: ");
scanf("%d", &NumeroPT);

printf("\n--- Dados da Carta 2 ---\n");

printf("estado: ");
scanf("%s", &estado2);

printf("codigo: ");
scanf("%s", codigo2);

printf("cidade: ");
scanf("%s", cidade2);

printf("populacao: ");
scanf("%d", &populacao2);

printf("area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &PIB2);

printf("NumeroPT: ");
scanf("%d", &NumeroPT2 );


return 0;

} 