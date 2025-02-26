#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Declaração de variáveis para a primeira carta
    char estado1[3], estado2[3], nomeCidade1[50], nomeCidade2[50], codigo1[4], codigo2[4];  
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    double pC1, dP1, pC2, dP2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Digite o estado (A-H): ");
    scanf("%2s", estado1); // Coloquei "%2s" para garantir que só lê 2 caracteres
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    getchar(); // Coloquei "getchar" Limpa o Enter
    
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o '\n' final para entrar com o dado seguinte

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o PIB  : ");
    scanf("%f", &pib1);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar(); // Coloquei "getchar" Limpa o Enter

     // Cálculo correto da densidade populacional
     dP1 = populacao1 / area1; 

     // Cálculo correto do PIB per capita
     pC1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    
    printf("Digite o estado (A-H): ");
    scanf("%2s", estado2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    getchar(); // Coloquei "getchar" Limpa o Enter
    
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o '\n' final

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o PIB : ");
    scanf("%f", &pib2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar(); // Coloquei "getchar" Limpa o Enter

     // Cálculo correto da densidade populacional
     dP2 = populacao2 / area2; 

     // Cálculo correto do PIB per capita
     pC2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);  
    printf("Codigo: %s\n", codigo1); 
    printf("Nome da Cidade: %s\n", nomeCidade1); 
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dP1);
    printf("PIB per Capita: %.2f reais\n", pC1);
    
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dP2);
    printf("PIB per Capita: %.2f reais\n", pC2);
    
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}