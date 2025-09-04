#include <stdio.h>

int main (){
    //Inserindo as variaveis do programa
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapta1, pibpercapta2, superpoder1, superpoder2;
    char estado, nome[20], codigo[20];
    float respopulacao, resarea, resdensidade, respib, respibpercapta, ressuperpoder, respontos;

    printf("*** Jogo de Cartas Super Trunfo ***\n");

//Fazendo a entrada e saida de dados da carta 01
    printf("Digite o estado da carta 01: \n", estado);
    scanf("%s", &estado);

    printf("Digite o codigo da carta 01: \n", codigo);
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da carta 01: \n", nome);
    scanf("%s", &nome);

    printf("Digite a populacao da carta 01: \n", populacao1);
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km2 da carta 01: \n", area1);
    scanf("%f", &area1);

    printf("Digite o PIB da carta 01: \n", pib1);
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 01: \n", pontos1);
    scanf("%d", &pontos1);

    // Apresentando os resultados dos dados da carta 01
    printf("O estado da carta 01 é: %c\n", estado);
    printf("O codigo da carta 01 é: %s\n", codigo);
    printf("O nome da cidade da carta 01 é: %s\n", nome);
    printf("A populacao da carta 01 é: %d habitantes\n", populacao1);
    printf("A area em km2 da carta 01 é: %f km2\n", area1);
    printf("O PIB da carta 01 é: %f bilhoes reais\n", pib1);
    printf("O numero de pontos turisticos da carta 01 é: %d\n", pontos1);


    // Fazendo o Caldulo da Densidade Populacional
    densidade1 = populacao1 / area1;

    printf("A Densidade Populacional da carta 1 é: %f\n", densidade1);

    // Fazendo o Calculo do PIB per capta
    pibpercapta1 = pib1 / populacao1;

    printf("O PIB per capta da carta 1 é: %f\n", pibpercapta1);
    
    // Calculando o Super poder da Carta 1

    superpoder1 = (populacao1 + area1 + pib1 + pontos1 + pibpercapta1 + (1 / densidade1));
    printf("O Super Poder da Carta 1 é: %.4f\n", superpoder1);

     //Fazendo a entrada e saida de dados da carta 02
     
    printf("Digite o estado da carta 02: \n", estado);
    scanf("%s", &estado);

    printf("Digite o codigo da carta 02: \n", codigo);
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da carta 02: \n", nome);
    scanf("%s", &nome);

    printf("Digite a populacao da carta 02: \n", populacao2);
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km2 da carta 02: \n", area2);
    scanf("%f", &area2);

    printf("Digite o PIB da carta 02: \n", pib2);
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 02: \n", pontos2);
    scanf("%d", &pontos2);

    // Apresentando os resultados dos dados da carta 02
    printf("O estado da carta 02 é: %c\n", estado);
    printf("O codigo da carta 02 é: %s\n", codigo);
    printf("O nome da cidade da carta 02 é: %s\n", nome);
    printf("A populacao da carta 02 é: %d habitantes\n", populacao2);
    printf("A area em km2 da carta 02 é: %f km2\n", area2);
    printf("O PIB da carta 02 é: %f bilhoes reais\n", pib2);
    printf("O numero de pontos turisticos da carta 02 é: %d\n", pontos2);

   // Fazendo o Caldulo da Densidade Populacional
    densidade2 = populacao2 / area2;

    printf("A Densidade Populacional da carta 2 é: %f\n", densidade2);

    // Fazendo o Calculo do PIB per capta
    pibpercapta2 = pib2 / populacao2;

    printf("O PIB per capta da carta 2 é: %f\n", pibpercapta2);
    
    // Calculando o Super poder da Carta 2

    superpoder2 = (populacao2 + area2 + pib2 + pontos2 + pibpercapta2 + (1 / densidade2));
    printf("O Super Poder da Carta 1 é: %.4f\n", superpoder2);

    // Comparando os dados da Carta 1 com a Carta 2

        respopulacao = populacao1 > populacao2;
        printf("População da Carta 1 é maior que a População da Carta 2? %d\n", populacao1 > populacao2);

        resarea = area1 > area2;
        printf("Area da Carta 1 é maior que a Area da Carta 2? %d\n", area1 > area2);

        respib = pib1 > pib2;
        printf("PIB da Carta 1 é maior que o PIB da Carta 2? %d\n", pib1 > pib2);

        respontos = pontos1 > pontos2;
        printf("Pontos Turisticos da Carta 1 é maior que os Pontos Turisticos da Carta 2? %d\n", pontos1 > pontos2);

        resdensidade = densidade1 < densidade2;
        printf("Densidade da Carta 1 é menor que a Densidade da Carta 2? %d\n", densidade1 > densidade2);

        respibpercapta = pibpercapta1 > pibpercapta2;
        printf("PIB Percapta da Carta 1 é maior que o PIB Percapta da Carta 2? %d\n", pibpercapta1 > pibpercapta2);

        ressuperpoder = superpoder1 > superpoder2;
        printf("Super Poder da Carta 1 é maior que o Super Poder da Carta 2? %d\n", superpoder1 > superpoder2);




    return 0;

}