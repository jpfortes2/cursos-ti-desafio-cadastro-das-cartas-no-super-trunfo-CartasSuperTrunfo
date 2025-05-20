#include<stdio.h>

//Nível Novato - Criando as Cartas do Super Trunfo

int main(){

//criação de variáveis
    char estado1, estado2, codcard1[3], codcard2[3], namecity1[20], namecity2[20];
    int populacao1, populacao2, numpontotur1, numpontotur2;
    float area1, area2, pib1, pib2;
    char codfinal1[5], codfinal2[5];


    printf("Desafio Super Trunfo!!!\n");
//captação de dados
    //carta 1
     printf("Vamos começar coletando os dados da Carta 1\n");
     printf("Digite a letra referente ao Estado (A a H):\n");
    scanf(" %c", &estado1);  // com espaço antes

    printf("Digite o código da carta de 01 a 04:\n");
    scanf("%s", codcard1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", namecity1);  // permite espaços

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &area1);

    printf("Qual é o Produto Interno Bruto (PIB) da cidade?\n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turísticos há na cidade?\n");
    scanf("%d", &numpontotur1);

    //carta2
    printf("Agora vamos começar a coletar os dados da Carta 2, que tal?\n");
    printf("Digite a letra referente ao Estado (A a H):\n");
    scanf(" %c", &estado2);  // com espaço antes

    printf("Digite o código da carta de 01 a 04:\n");
    scanf("%s", codcard2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", namecity2);  // permite espaços

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &area2);

    printf("Qual é o Produto Interno Bruto (PIB) da cidade?\n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos há na cidade?\n");
    scanf("%d", &numpontotur2);
    printf("\n");

// Montagem dos códigos finais    
    sprintf(codfinal1, "%c%s", estado1, codcard1);
    sprintf(codfinal2, "%c%s", estado2, codcard2);

//Impressão dos dados na tela
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codfinal1);
    printf("Nome da cidade: %s\n", namecity1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numpontotur1);
    printf("\n");
    printf("\n");
     printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codfinal2);
    printf("Nome da Cidade: %s\n", namecity2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontotur2);

    

//Finalizando software

return 0;


}