#include <stdio.h>

int main (){
    //Inserindo as variaveis do programa
    int populacao, pontos;
    float area, pib;
    char estado, nome[20], codigo[20];

//Fazendo a entrada e saida de dados da carta 01
    printf("Digite o estado da carta 01: \n", estado);
    scanf("%c", &estado);

    printf("Digite o codigo da carta 01: \n", codigo);
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da carta 01: \n", nome);
    scanf("%s", &nome);

    printf("Digite a populacao da carta 01: \n", populacao);
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km2 da carta 01: \n", area);
    scanf("%f", &area);

    printf("Digite o PIB da carta 01: \n", pib);
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da carta 01: \n", pontos);
    scanf("%d", &pontos);

    // Apresentando os resultados dos dados da carta 01
    printf("O estado da carta 01 é: %c\n", estado);
    printf("O codigo da carta 01 é: %s\n", codigo);
    printf("O nome da cidade da carta 01 é: %s\n", nome);
    printf("A populacao da carta 01 é: %d habitantes\n", populacao);
    printf("A area em km2 da carta 01 é: %f km2\n", area);
    printf("O PIB da carta 01 é: %f bilhoes reais\n", pib);
    printf("O numero de pontos turisticos da carta 01 é: %d\n", pontos);

     //Fazendo a entrada e saida de dados da carta 02
     
    printf("Digite o estado da carta 02: \n", estado);
    scanf("%c", &estado);

    printf("Digite o codigo da carta 02: \n", codigo);
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da carta 02: \n", nome);
    scanf("%s", &nome);

    printf("Digite a populacao da carta 02: \n", populacao);
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km2 da carta 02: \n", area);
    scanf("%f", &area);

    printf("Digite o PIB da carta 02: \n", pib);
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da carta 02: \n", pontos);
    scanf("%d", &pontos);

    // Apresentando os resultados dos dados da carta 02
    printf("O estado da carta 02 é: %c\n", estado);
    printf("O codigo da carta 02 é: %s\n", codigo);
    printf("O nome da cidade da carta 02 é: %s\n", nome);
    printf("A populacao da carta 02 é: %d habitantes\n", populacao);
    printf("A area em km2 da carta 02 é: %f km2\n", area);
    printf("O PIB da carta 02 é: %f bilhoes reais\n", pib);
    printf("O numero de pontos turisticos da carta 02 é: %d\n", pontos);

   
    
    return 0;
}
