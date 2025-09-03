#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10]; 
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    int turistico1, turistico2;
    float area1, area2; 
    float pib1, pib2;


    printf("Desafio novato: Criando as Cartas do Super Trunfo \n \n \n");

    // Inserindo dados da Carta 1

    printf("Insira o Estado da Carta 1 (Uma letra de 'A' a 'H'): \n");
    scanf("%s", estado1);
    
    printf("\n Digite o Codigo Carta 1: \n");
    scanf("%s", codigo1);
    
    printf("\n Digite o nome da cidadade da Carta 1: \n");
    scanf("%s", cidade1);
    
    printf("\n Digite a populacao da Cidade 1: \n");
    scanf("%i", &populacao1);
   
    printf("\n Digite a area da Carta 1: \n");
    scanf("%f", &area1);
   
    printf("\n Digite o PIB da Cidade 1: \n");
    scanf("%f", &pib1);
    
    printf("\n Digite o numero de pontos turisticos da Cidade 1: \n");
    scanf("%i", &turistico1);
    
    // Inserindo dados da Carta 2

    printf("\n Insira o Estado da Carta 2 (Uma letra de 'A' a 'H'): \n");
    scanf("%s", estado2);
    
    printf("\n Digite o Codigo Carta 2: \n");
    scanf("%s", codigo2);
    
    printf("\n Digite o nome da cidadade da Carta 2: \n");
    scanf("%s", cidade2);
    
    printf("\n Digite a populacao da Cidade 2: \n");
    scanf("%i", &populacao2);
   
    printf("\n Digite a area da Carta 2: \n");
    scanf("%f", &area2);
   
    printf("\n Digite o PIB da Cidade 2: \n");
    scanf("%f", &pib2);
    
    printf("\n Digite o numero de pontos turisticos da Cidade 2: \n");
    scanf("%i", &turistico2);

    // divide a população da cidade pela area
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Divida o PIB da cidade pela sua população
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;



    printf("A Carta 1: \n Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %i \n Area total: %.2f km2 \n O PIB: %.2f \n Numero de Pontos Turisticos %i \n Densidade Populacional %f hab/km² \n PIB per Capita %f \n \n \n", estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1, densidade1, pibPerCapita1);
    printf("A Carta 2: \n Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %i \n Area total: %.2f km2 \n O PIB: %.2f \n Numero de Pontos Turisticos %i \n Densidade Populacional %f hab/km² \n PIB per Capita %f \n \n \n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidade2, pibPerCapita2);


/* Estrutura da carta:
Carta
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50 */

    return 0;
}
