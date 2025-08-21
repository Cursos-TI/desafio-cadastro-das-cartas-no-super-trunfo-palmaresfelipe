#include <stdio.h>

int main(){


    //Desafio Nivel Mestre
    //Aluno: Felipe Palmares, Estacio EAD 2025/3.

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

   
    Exemplo 2:

    Carta 2:
    Estado = B
    Código da carta = B01
    Cidade = Aracaju
    População = 670000
    Área = 181.90 km²
    PIB = 18.40 bilhões de reais
    Número de pontos Turísticos: 14
  
    */


    //Carta #01

    char estado1 = 'A';
    char codigo1[10];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float densidade1, densidade3;
    float pibpercapita1;
    float SuperPoder1;

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
    scanf("%lu", &populacao1);
    printf("Digite a Área em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &turisticos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1*1000000000) / populacao1;
    densidade3 = area1 / populacao1;
    SuperPoder1 = (float) (populacao1 + area1 + pib1 + turisticos1 + pibpercapita1 + densidade3);


    printf("\nCarta 1:\nLetra: %c\nCódigo da carta: %s\nCidade: %s\nPopulação: %lu habitantes.\nÁrea: %.2f km².\nDensidade Populacional: %.2f habitantes por km²\nPIB: %.2f bilhões de reais.\nPIB Per Capita: %.2f reais.\nPontos Turísticos: %d \n", estado1, codigo1, cidade1, populacao1, area1, densidade1, pib1, pibpercapita1, turisticos1);

    printf("Super Poder da Carta 1: %.2f\n\n", SuperPoder1);


    //Carta #02

    char estado2 = 'B';
    char codigo2[10];
    char cidade2[20];
    unsigned int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2, densidade4;
    float pibpercapita2;
    float SuperPoder2;

    printf("Você recebeu sua segunda carta.\n\n");

    printf("Carta 2\n\n");
    printf("Digite a letra que representa o Estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a População:\n");
    scanf("%lu", &populacao2);
    printf("Digite a Área em km²\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &turisticos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2*1000000000) / populacao2;
    densidade4 = area2 / populacao2;
    SuperPoder2 = (float) (populacao2 + area2 + pib2 + turisticos2 + pibpercapita2 + densidade4);


    printf("\nCarta 2:\nLetra: %c\nCódigo da carta: %s\nCidade: %s \nPopulação: %lu habitantes.\nÁrea: %.2f km².\nDensidade Populacional: %.2f habitantes por km²\nPIB: %.2f bilhões de reais.\nPIB per capita: %.2f reais.\nPontos Turísticos: %d \n", estado2, codigo2, cidade2, populacao2, area2, densidade2, pib2, pibpercapita2, turisticos2);

    printf("Super Poder da Carta 2: %.2f\n\n", SuperPoder2);


    printf("Agora vamos comparar os atributos das cidades e descobrir qual carta é a vencedora:\n\n");
    printf("Se a resposta do atributo for 1 então a Carta 1 é vencedora.\n");
    printf("Se a resposta do atributo for 0 então a carta 2 é vencedora.\n\n");


    // resultado
 

    int resultadopopulacao, resultadoarea, resultadopib, resultadoturisticos, resultadodensidade, resultadopibpercapita, resultadosuperpoder;
    
    resultadopopulacao = populacao1>populacao2;
    resultadoarea = area1>area2;
    resultadopib = pib1>pib2;
    resultadoturisticos = turisticos1>turisticos2;
    resultadodensidade = densidade1<densidade2;
    resultadopibpercapita = pibpercapita1>pibpercapita2;
    resultadosuperpoder = SuperPoder1>SuperPoder2;


    printf("População:%d\n", resultadopopulacao);
    printf("Área: %d\n", resultadoarea);
    printf("PIB: %d\n", resultadopib);
    printf("Pontos Turísticos: %d\n", resultadoturisticos);
    printf("Densidade Populacional: %d\n", resultadodensidade);     // quanto menor a densidade, maior o "poder".
    printf("PIB Per Capita: %d\n", resultadopibpercapita);
    printf("Super Poder: %d\n\n", resultadosuperpoder);

    printf("População: a Carta 1 venceu.\n");
    printf("Área: a Carta 1 venceu.\n");
    printf("PIB: a Carta 1 venceu.\n");
    printf("Pontos Turísticos: a Carta 1 venceu.\n");
    printf("Densidade Populacional: a Carta 2 venceu.\n");
    printf("PIB Per Capita: a Carta 1 venceu.\n");
    printf("Super Poder: a Carta 1 venceu.\n\n");

    printf("Resultado Geral: a Carta 1 venceu.\n");







    return 0;


}