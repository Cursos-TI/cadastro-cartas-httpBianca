#include <stdio.h>

int main () {
    //declaração das variáveis que armazenarão as informações das cartas
    char estado1;
    char estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //Impressão das informações do jogo
    printf("\n====================================================================\n");
    printf("|                     SUPER TRUNFO - JOGO EM C:                    |\n");
    printf("********            Cadastre suas Cartas comigo!             *******\n");

    //Entrada de dados pelo usuário, e armazenamento dos mesmos nas variáveis declaradas
    printf("\nDigite o estado da primeira carta (Escolha uma letra de A á H): ");
    scanf("%s", &estado1);
  
    printf("\nDigite o estado da segunda carta (Escolha uma letra de A á H): \n");
    scanf("%s", &estado2);
  
    printf("\nDigite o código da primeira carta (escolha um número entre 01 e 04): \n");
    scanf("%s", codigo1);
    
    printf("\nDigite o código da segunda carta (escolha um número entre 01 e 04): \n");
    scanf("%s", codigo2);
  
    printf("\nDigite o nome da cidade da primeira carta: \n");
    scanf("%s", cidade1);
  
    printf("\nDigite o nome da cidade da segunda carta: \n");
    scanf("%s", cidade2);

    printf("\nDigite a população da primeira carta: \n");
    scanf("%d", &populacao1);
  
    printf("\nDigite a população da segunda carta: \n");
    scanf("%d", &populacao2);
  
    printf("\nDigite a área da primeira carta: \n");
    scanf("%f", &area1);
  
    printf("\nDigite a área da segunda carta: \n");
    scanf("%f", &area2);
  
    printf("\nDigite o PIB da primeira carta: \n");
    scanf("%f", &pib1);  
  
    printf("\nDigite o PIB da segunda carta: \n");
    scanf("%f", &pib2);
  
    printf("\nDigite a quantidade de pontos turisticos da primeira carta: \n");
    scanf("%d", &pontos1);
  
    printf("\nDigite a quantidade de pontos turisticos da segunda carta: \n");
    scanf("%d", &pontos2);
  
    //Impressão para o usuário, informando que as cartas foram preenchidas
    printf("\n====================================================================\n");
    printf("|                  Cartas Preenchidas com Sucesso!                  |\n");
    printf("********            Vamos verificar as cartas...              *******\n");

    //Impressão das cartas preenchidas pelo usuário
  
    //Carta 01 (impressa de acordo com o preenchimento do usuário)
    printf("\n====================================================================\n");
    printf("*********************** CARTA 01 *************************************\n");
    printf("Estado: %s\n", &estado1);
    printf("Código: %s%s \n", &estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos1);
    printf("====================================================================\n");
  
    //Carta 02 (impressa de acordo com o preenchimento do usuário)
    printf("*********************** CARTA 02 *************************************\n");
    printf("Estado: %s\n", &estado2);
    printf("Código: %s%s \n", &estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontos2);
    printf("====================================================================\n");
      

  return 0;
}
