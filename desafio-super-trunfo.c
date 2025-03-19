#include <stdio.h>

int main() {
    char estado1, estado2;
    char codCard1[4], codCard2[4];
    char namecid1[20], namecid2[20];
    int populacao1 = 0, populacao2 = 0;
    float area1 = 0, area2 = 0;
    float pib1 = 0, pib2 = 0;
    int numTuriste1 = 0, numTuriste2 = 0;

    printf("**Olá, seja bem-vindo**\n-----------------------\n SUPER TRUNFO - PAISES\n-----------------------\n\n");

    // Entrada da Carta 1
    printf("-->CARTA N1<--\n");
    printf("Digite uma letra de A a H representando um dos estados\n");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (Ex: A01, B03)\n");
    scanf("%c", codCard1);
    printf("Informe o nome da cidade\n");
    scanf("%c", namecid1);
    printf("Informe o número de Habitantes\n");
    scanf("%s", &populacao1);
    printf("Informe a área da Cidade (km²)\n");
    scanf("%f", &area1);
    printf("Informe o PIB da Cidade (em bilhões de reais)\n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de Pontos Turísticos:\n");
    scanf("%d", &numTuriste1);

    // Entrada da Carta 2
    printf("\n\n-->CARTA N2<--\n");
    printf("Digite uma letra de A a H representando um dos estados\n");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (Ex: A01, B03)\n");
    scanf("%s", codCard2);
    printf("Informe o nome da cidade\n");
    scanf("%s", namecid2);
    printf("Informe o número de Habitantes\n");
    scanf("%s", &populacao2);
    printf("Informe a área da Cidade (km²)\n");
    scanf("%f", &area2);
    printf("Informe o PIB da Cidade (em bilhões de reais)\n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de Pontos Turísticos:\n");
    scanf("%d", &numTuriste2);

 
    return 0;
}