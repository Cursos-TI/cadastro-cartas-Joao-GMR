#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  setlocale(LC_ALL, "Portuguese");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  
    // Área para entrada de dados

    printf ("Preencha os campos conforme solicitados. \n");

    printf ("Cadastro da Primeira carta:\n");
    printf ("Estado (Escolha um letra de A a H):");
    scanf (" %c", &estado1);

    printf ("Código da carta (Repita a letra escolhida para o Estado e adicione de 01 a 08)\n");
    scanf (" %s", &codigo1);
    
    printf ("Nome da cidade: ");
    scanf (" %[^\n]", &nomeCidade1);
    
    printf ("População: ");
    scanf (" %d", &populacao1);

    printf ("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf (" %f", &pib1);

    printf ("Número de pontos turisticos: ");
    scanf (" %d", &pontosTuristicos1);


  //Cadastro da segunda carta

    printf ("Cadastro da Segunda carta:\n");
    printf ("Estado (Escolha um letra de A a H): ");
    scanf (" %c", &estado2);

    printf ("Código da carta (Repita a letra escolhida para o Estado e adicione de 01 a 08)\n");
    scanf (" %s", &codigo2);
    
    printf ("Nome da cidade: ");
    scanf (" %[^\n]", &nomeCidade2);
    
    printf ("População: ");
    scanf (" %d", &populacao2);

    printf ("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf (" %f", &pib2);

    printf ("Número de pontos turisticos: ");
    scanf (" %d", &pontosTuristicos2);
  // Área para exibição dos dados da cidade
    printf ("\n \n");
    printf ("Informações da Carta 1");
    printf ("Carta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", nomeCidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.f\n", area1);
    printf ("PIB: %.f\n", pib1);

    printf ("\n \n");
    printf ("Informações da Carta 2");
    printf ("Carta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", nomeCidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.f\n", area2);
    printf ("PIB: %.f\n", pib2);

return 0;
} 





