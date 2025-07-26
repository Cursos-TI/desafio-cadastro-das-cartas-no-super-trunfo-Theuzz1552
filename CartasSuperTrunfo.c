#include <stdio.h>

int main(){

char estado = 'A', estado2 = 'B';
char codigo[20] = "A01", codigo2[20] = "B02";
char cidade[20] = "Sao Paulo", cidade2[20] = "Rio de Janeiro";
int populacao = 12325000, populacao2 = 6748000;
float area = 1521.11, area2 =  120.25;
float PIB = 699.28, PIB2 = 300.50;
int PT = 50, PT2 = 30;

printf("\n--- Dados da Carta 1 ---\n");

printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f bilhoes de reais\n", PIB);
printf("Numero de Pontos Turisticos: %d\n", PT);

printf("\n--- Dados da Carta 2 ---\n");

printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", PIB2);
printf("Numero de Pontos Turisticos: %d\n", PT2);

return 0;

} 