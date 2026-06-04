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
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int pontosturisticos1;
int pontosturisticos2;


  // Área para entrada de dados

printf("Carta 1 - Digite o estado: \n" );
scanf("%s", estado1);

printf("Carta 1 - Digite o codigo: \n" );
scanf("%s", codigo1);

printf("Carta 1 - Digite a cidade: \n" );
scanf("%s", cidade1);

printf("Carta 1 - Digite a população: \n" );
scanf("%d", &populacao1);

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
scanf("%d", &populacao2);

printf("Carta 2 - Digite a área: \n" );
scanf("%f", &area2);

printf("Carta 2 - Digite o PIB: \n" );
scanf("%f", &pib2);

printf("Carta 2 - Digite a quantidade de pontos turísticos: \n" );
scanf("%d", &pontosturisticos2);


  // Área para exibição dos dados da cidade

printf("CARTA 1: Código: %s \n", codigo1);
printf("Estado: %s \n", estado1);
printf("Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Pontos Turísticos: %d \n", pontosturisticos1);

printf("\n CARTA 2: Código: %s \n", codigo2);
printf("Estado: %s \n", estado2);
printf("Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %f \n", area2);
printf("PIB: %f \n", pib2);
printf("Pontos Turísticos: %d \n", pontosturisticos2);


return 0;
} 
