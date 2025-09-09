#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpc1, pibpc2, superpoder1, superpoder2;
    int turistico1, turistico2;

    
    // Cadastro das Cartas:
    printf("Desafio Super Trunfo\n");
    
    printf("\n Cadastrar Carta (01)\n");

    //Entrada de dados: carta 1 
    printf("\nDigite a letra correspondente ao seu Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turistico1);

    //Calculo da Densidade Populacional:
    densidade1 = (float)populacao1 / area1;

    //Cálculo do PIB per Capita;
    pibpc1 = (float)pib1 / populacao1;

    superpoder1 = populacao1 + area1 + pib1 + turistico1+ pibpc1 + (1 / densidade1);


    printf("\n Carta (01) cadastrada com sucesso!!! \n");

    //Saida de dados: carta 1
    printf("Carta 01: \n");
    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$%.2F\n", pibpc1);
    printf("superpoder:%.2f\n",superpoder1);
    
    printf("\nCadastrar Carta (02)\n");

    //Entrada de dados: Carta 2
    printf("\nDigite a letra correspondente ao seu Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turistico2);

    //Calculo da Densidade Populacional:
    densidade2 = (float)populacao2 / area2;

    //Cálculo do PIB per Capita;
    pibpc2 = (float)pib2 / populacao2;

    superpoder2 = populacao2 + area2 + pib2 + turistico2+ pibpc2 + (1 / densidade2);

    printf("\n Carta 02 cadastrada com sucesso!!! \n");

    //Saida de dados: carta 2
    printf("Carta 02: \n");
    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2F\n", pibpc2);
    printf("superpoder:%.2f\n",superpoder2);
   

    // Comparação de Cartas:
    
    printf("\n Atributo: População \n");
    printf("Carta 1: %lu\n", populacao1);
    printf("Carta 2: %lu\n", populacao2);
    if(populacao1 > populacao2){
        printf("Carta 1 Venceu por %lu hab a mais!\n", populacao1 - populacao2);
    } else {
        printf("Carta 2 Venceu por %lu hab a mais!\n", populacao2 - populacao1);
    }

    printf("\n Atributo: Área \n");
    printf("Carta 1: %.2f\n", area1);
    printf("Carta 2: %.2f\n", area2);
    if(area1 > area2){
        printf("Carta 1 Venceu por %.2f km² a mais!\n", area1 - area2);
    } else {
        printf("Carta 2 Venceu por %.2f km² a mais!\n", area2 - area1);
    }

    printf("\n Atributo: PIB \n");
    printf("Carta 1: R$%.2f\n", pib1);
    printf("carta 2: R$%.2f\n", pib2);
    if(pib1 > pib2){
        printf("Carta 1 Venceu por R$%.2f a mais!\n", pib1 - pib2);
    } else {
        printf("Carta 2 Venceu por R$%.2f a mais!\n", pib2 - pib1);
    }

    printf("\n Atributo: Pontos Turísticos \n");
    printf("Carta 1: %d\n", turistico1);
    printf("Carta 2: %d\n", turistico2);
    if(turistico1 > turistico2){
        printf("Carta 1 Venceu por %d a mais!\n", turistico1 - turistico2);
    } else {
        printf("Carta 2 Venceu por %d a mais!\n", turistico2 - turistico1);
    }

    printf("\n Atributo: Densidade Populacional \n");
    printf("Carta 1: %.2f hab/km²\n", densidade1);
    printf("Carta 2: %.2f hab/km²\n", densidade2);
    if(densidade1 < densidade2){
        printf("Carta 1 Venceu por %.2f hab/km² a menos!\n", densidade2 - densidade1);
    } else {
        printf("Carta 2 Venceu por %.2f hab/km² a menos!\n", densidade1 - densidade2);
    }

    printf("\n Atributo: PIB Per Capita \n");
    printf("Carta 1: R$%.2f\n", pibpc1);
    printf("Carta 2: R$%.2f\n", pibpc2);
    if(pibpc1 > pibpc2){
        printf("Carta 1 Venceu por R$%.2f a mais!\n", pibpc1 - pibpc2);
    } else {
        printf("Carta 2 Venceu por R$%.2f a mais!\n", pibpc2 - pibpc1);
    }

    printf("\n Atributo: Super Poder\n");
    printf("Carta 1: %.2f\n", superpoder1);
    printf("Carta 2: %.2f\n", superpoder2);
    if(superpoder1 > superpoder2){
        printf("Parabens, a Carta 1 Venceu!!!\n");
    } else {
        printf("Parabens, a Carta 2 Venceu!!!\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
