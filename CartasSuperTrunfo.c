#include <stdio.h>
#include <string.h>


int main() {
    char estado, estado2;
    char codigo[20], cidade[20], codigo2[20], cidade2[20], *vencedor_percap;
    int  turisticos, turisticos2, populacao2, populacao, escolha ;
    float pib, area, pib2, area2, denspop, denspop2, percap, percap2, superPoder, superPoder2, soma, soma2;
    

    printf("Digite cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Qual estado fica essa cidade (A-H): ");
    scanf(" %c", &estado);

    printf("Qual o codigo dessa carta: ");
    scanf("%s", codigo);

    printf("Qual a populaçao dessa cidade: ");
    scanf("%d", &populacao);

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
    scanf("%d", &populacao2);

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

    soma = populacao + area + pib + percap + turisticos + (1.0f / denspop);

    soma2 = populacao2 + area2 + pib2 + percap2 + turisticos2 + (1.0f / denspop2);

    superPoder;

    printf("\n\n");
    printf("*** CARTA 1***\n");
    printf("ESTADO: %c\n", estado);
    printf("CODIGO: %s\n", codigo);
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %.2f km² \n ", area);
    printf("PIB: %.2f R$ \n  ", pib);
    printf("NÚMEROS DE PONTOS TURÌSTICOS: %d\n", turisticos);
    printf("DENSIDADE POPULACIONAL %.2f hab/km² \n ", denspop);
    printf("PIB PER CAPITA: R$%.2f\n  ", percap);
    printf("SUPER PODER: %f\n", soma);

    printf("\n\n");
    printf("*** CARTA 2***\n");
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km² \n ", area2);
    printf("PIB: %.2f R$ \n  ", pib2);
    printf("NÚMEROS DE PONTOS TURÌSTICOS: %d\n", turisticos2);
    printf("DENSIDADE POPULACIONAL %.2f hab/km² \n ", denspop2);
    printf("PIB PER CAPITA: R$%.2f\n ", percap2);
    printf("SUPER PODER: %f\n", soma2);

    printf("##### RESULTADOS #####/n/n");
    printf("\n\n");


    printf("População: Carta 1 venceu (%d)\n", (populacao > populacao2));
    printf("Área: Carta 1 venceu (%d)\n", (area > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib > pib2));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (turisticos > turisticos2));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (percap > percap2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (soma > soma2));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (denspop < denspop2));


    printf("Implementando os 3 desafios");


    //Desafio 1 - comparação de cartas com base em um único atributo

    printf("Comparação única \n");

    if(populacao > populacao2) {
      printf("Vencedor (População): Carta 1 - (%d hab)\n", populacao);
    } else if (populacao2 > populacao) {
      printf("Vencedor (População): Carta 2 - (%d hab)\n", populacao2);
    } else {
      printf("Resultado (Populacao): Empate (%d hab)\n", populacao);
    }
    printf("\n");


    //Desafio 2 - Multiplos atributos

    printf("Multiplos atributos com switch \n");
    printf("Escolha qual atributo comparar:\n");
    printf("1. Area\n");
    printf("2. PIB\n");
    printf("3. Pontos Turisticos\n");
    printf("Escolha (1-3): ");
    scanf("%d", &escolha);

    switch(escolha) {
      case 1: 
      printf("Comparando Area: \n");
      if (area > area2) {
        printf("Vencedor (Area): Carta 1 - %s (%.2f km)\n", cidade, area);
      } else if (area2 > area) {
        printf("Vencedor (Area): Carta 2 - %s (%.2f km)\n", cidade2, area2);
      } else {
        printf("Resultado (Area): Empate (%.2f km)\n", area);
      }

      break;

      case 2:
      printf("Comparando PIB: \n");
      if(pib > pib2) {
        printf("Vencedor (PIB): Carta 1 - %s (R$%.2f)\n", cidade, pib);
      } else if (pib2 > pib) {
        printf("Vencedor (PIB): Carta 2 - %s (R$%.2f)\n", cidade2, pib2);
      } else {
        printf("Resultado (PIB): Empate (R$%.2f)\n", pib);
      }

      break;

      case 3:
      printf("Comparando Pontos Turisticos: \n");
      if(turisticos > turisticos2) {
        printf("Vencedor (Pontos Turisticos): Carta 1 - %s (%d)\n", cidade, turisticos);
      } else if(turisticos2 > turisticos) {
        printf("Vencedor (Pontos Turiscos): Carta 1 - %s (%d)\n", cidade2, turisticos2);
      } else {
        printf("Resultado (Pontos Turisticos): Empate (%d)\n", turisticos);
      }

      break;
      default: {
        printf("opção inválida \n");
      }
    }

printf("\n");

    // Desafio 3 - Operador ternario + estruturas aprendidas switch e if

    printf("Operador ternario");

    if(percap == percap2) {
      vencedor_percap = "Empate";
    } else {
      vencedor_percap = (percap > percap2) ? cidade : cidade2;
    }
    printf("Vencedor (PIB per Capita): %s\n", vencedor_percap);


    // integrando aprendizados (if, Op.logico, realcional)
    printf("Integrando aprendizados \n");
    printf("Comparando qualidade de vida; \n");

    if((percap > percap2) && (denspop < denspop2)) {
      printf("Resultado: Carta 1 (%s) vence!\n", cidade);
    } else if (( percap2 > percap) && (denspop2 < denspop)) {
      printf("Resultado: Carta 2 (%s) vence!\n", cidade2);
    } else {
      printf("Resultado: Nenhuma carta venceu nos dois criterios (ou houve empate).\n");
    };


    // Comparaçao super poder
    printf("Super Poder \n");
    if (soma > soma2){
      printf("VENCEDOR GERAL: Carta 1 - %s (Poder: %.2f vs %.2f)\n", cidade, soma, soma2);
    } else if (soma2 > soma) {
      printf("VENCEDOR GERAL: Carta 2 - %s (Poder: %.2f vs %.2f)\n", cidade2, soma2, soma);
    } else {
      printf("VENCEDOR GERAL: EMPATE (Poder: %.2f)\n", soma);
    }

return 0;
} 


    

    

