#include <stdio.h>

int main(){

    //Carta #01

    char estado1 = 'A';
    char codigo1[10];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    // OBS: O desafio foi construído com base nas informações dos exemplos abaixo.

    /*
    Exemplo:

    Carta 1:
    Estado = A
    Código da carta = A01
    Cidade = Recife
    População = 1661017 habitantes
    Área = 218.80 km²
    PIB = 54.69 bilhões de reais
    Número de pontos Turísticos: 30
    */

    printf("Bem vindo ao SuperTrunfo, para sua primeira jogatina você receberá duas cartas.\n\n");
    

    printf("Você recebeu sua primeira carta.\n\n");
    printf("Vamos confirmar os dados juntos?\n\n");

    printf("Carta 1\n");
    printf("Digite a letra que representa o Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o Código da sua carta:\n");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a População:\n");
    scanf("%d", &populacao1);
    printf("Digite a Área em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões:\n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &turisticos1);
    printf("\nCarta 1:\nLetra: %c\nCódigo da carta: %s\nCidade: %s\nPopulação: %d habitantes.\nÁrea: %.2f km².\nPIB: %.2f bilhões de reais.\nPontos Turísticos: %d \n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turisticos1);



    //Carta #02

    char estado2 = 'B';
    char codigo2[10];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    /*
    Informações da Carta 2
    Estado = B
    Código da carta = B01
    Cidade = Aracaju
    População = 670000 habitantes
    Área = 181.90 km²
    PIB = 18.40 bilhões de reais
    Número de pontos Turísticos: 14
    */


    printf("Você recebeu sua segunda carta.\n\n");

    printf("Carta 2\n\n");
    printf("Digite a letra que representa o Estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a População:\n");
    scanf("%d", &populacao2);
    printf("Digite a Área em km²\n");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões:\n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &turisticos2);
    printf("\nCarta 2:\nLetra: %c\nCódigo da carta: %s\nCidade: %s \nPopulação: %d habitantes.\nÁrea: %.2f km².\nPIB: %.2f bilhões de reais.\nPontos Turísticos: %d \n", estado2, codigo2, cidade2, populacao2, area2, pib2, turisticos2);



    return 0;

}