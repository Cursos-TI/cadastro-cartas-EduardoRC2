#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
    char estado, estado2;
    char codigo[20], cidade[20], codigo2[20], cidade2[20];
    int  turisticos, turisticos2;
    float pib, area, pib2, area2, denspop, denspop2, percap, percap2, populacao2, populacao;
    

    printf("Digite cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Qual estado fica essa cidade (A-H): ");
    scanf(" %c", &estado);

    printf("Qual o codigo dessa carta: ");
    scanf("%s", codigo);

    printf("Qual a populaçao dessa cidade: ");
    scanf("%f", &populacao);

    printf("Quantos pontos turisticos tem nessa cidade: ");
    scanf("%d", &turisticos);

    printf("Qual o pib dessa cidade: ");
    scanf("%f", &pib);

    printf("Qual o tamanho dessa cidade (KM²): ");
    scanf("%f", &area);

  

    

    while (getchar() != '\n');

    printf("Digite cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Qual estado fica essa cidade (A-H): ");
    scanf(" %c", &estado2);

    printf("Qual o codigo dessa carta: ");
    scanf("%s", codigo2);

    printf("Qual a populaçao dessa cidade: ");
    scanf("%f", &populacao2);

    printf("Quantos pontos turisticos tem nessa cidade: ");
    scanf("%d", &turisticos2);

    printf("Qual o pib dessa cidade: ");
    scanf("%f", &pib2);

    printf("Qual o tamanho dessa cidade (KM²): ");
    scanf("%f", &area2);

    percap = pib / populacao;

    percap2 = pib2 / populacao2;

    denspop = populacao / area;

    denspop2 = populacao2 / area2;

    printf("\n\n");
    printf("*** CARTA 1***\n");
    printf("ESTADO: %c\n", estado);
    printf("CODIGO: %s\n", codigo);
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %f\n", populacao);
    printf("ÁREA: %.2f km² \n ", area);
    printf("PIB: %.2f reais \n  ", pib);
    printf("NÚMEROS DE PONTOS TURÌSTICOS: %d\n", turisticos);
    printf("DENSIDADE POPULACIONAL %.2f hab/km² \n ", denspop);
    printf("PIB PER CAPITA: %.2f reais \n  ", percap);

    printf("\n\n");
    printf("*** CARTA 2***\n");
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %f\n", populacao2);
    printf("ÁREA: %.2f km² \n ", area2);
    printf("PIB: %.2f reais \n  ", pib2);
    printf("NÚMEROS DE PONTOS TURÌSTICOS: %d\n", turisticos2);
    printf("DENSIDADE POPULACIONAL %.2f hab/km² \n ", denspop2);
    printf("PIB PER CAPITA: %.2f reais \n ", percap2);
return 0;
} 


    

    

