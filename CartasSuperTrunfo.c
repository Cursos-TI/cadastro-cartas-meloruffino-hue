#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1 [20];
char estado2 [20];
char codigo1 [10];
char codigo2 [10];
char cidade1 [20];
char cidade2 [20];
unsigned long int populacao1;
unsigned long int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int pontosturisticos1;
int pontosturisticos2;

//declaraçao das novas variáveis

float densidade1, densidade2;
float percapta1, percapta2;
float superpoder1, superpoder2;

  // Área para entrada de dados

printf("Carta 1 - Digite o estado: \n" );
scanf("%s", estado1);

printf("Carta 1 - Digite o codigo: \n" );
scanf("%s", codigo1);

printf("Carta 1 - Digite a cidade: \n" );
scanf("%s", cidade1);

printf("Carta 1 - Digite a população: \n" );
scanf("%lu", &populacao1);

printf("Carta 1 - Digite a área: \n" );
scanf("%f", &area1);

printf("Carta 1 - Digite o PIB: \n" );
scanf("%f", &pib1);

printf("Carta 1 - Digite a quantidade de pontos turísticos: \n" );
scanf("%d", &pontosturisticos1);

printf("Carta 2 - Digite o estado: \n" );
scanf("%s", estado2);

printf("Carta 2 - Digite o codigo: \n" );
scanf("%s", codigo2);

printf("Carta 2 - Digite a cidade: \n" );
scanf("%s", cidade2);

printf("Carta 2 - Digite a população: \n" );
scanf("%lu", &populacao2);

printf("Carta 2 - Digite a área: \n" );
scanf("%f", &area2);

printf("Carta 2 - Digite o PIB: \n" );
scanf("%f", &pib2);

printf("Carta 2 - Digite a quantidade de pontos turísticos: \n" );
scanf("%d", &pontosturisticos2);

//calculo densidade e renda percapta e agora superpoderes

densidade1 = (float) populacao1/area1;
densidade2 = (float) populacao2/area2;

percapta1 = (float) pib1/populacao1;
percapta2 = (float) pib2/populacao2;

superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapta1 + (1.0 / densidade1);
superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapta2 + (1.0 / densidade2);

  // Área para exibição dos dados da cidade

printf("CARTA 1: Código: %s \n", codigo1);
printf("Estado: %s \n", estado1);
printf("Cidade: %s \n", cidade1);
printf("População: %lu \n", populacao1);
printf("Área: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Pontos Turísticos: %d \n", pontosturisticos1);

//imprimindo novas variaveis

printf("Densidade Populacional: %2.f ", densidade1);
printf(" hab/km² \n");
printf("Renda Percapta: %2.f \n", percapta1);

printf("Super Poder: %.2f \n", superpoder1);

printf("\n CARTA 2: Código: %s \n", codigo2);
printf("Estado: %s \n", estado2);
printf("Cidade: %s \n", cidade2);
printf("População: %lu \n", populacao2);
printf("Área: %f \n", area2);
printf("PIB: %f \n", pib2);
printf("Pontos Turísticos: %d \n", pontosturisticos2);

//imprimindo novas variaveis carta 2

printf("Densidade Populacional: %2.f \n", densidade2);
printf(" hab/km² \n");
printf("Renda Percapta: %2.f \n", percapta2);

printf("Super Poder: %.2f \n", superpoder2);

printf("\nCOMPARAÇÃO DE CARTAS\n\n");
printf("População: %d\n", populacao1 > populacao2);
printf("Área: %d\n", area1 > area2);
printf("PIB: %d\n", pib1 > pib2);
printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
printf("Densidade Populacional: %d\n", densidade1 < densidade2);
printf("PIB per Capita: %d\n", percapta1 > percapta2);
printf("Super Poder: %d\n", superpoder1 > superpoder2);


return 0;
} 
