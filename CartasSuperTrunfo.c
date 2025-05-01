#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Inicializando variaveis com valores conhecidos da primeira carta
    // Não estou usando Struct pois a atividade solicitava que fosse muito simpes e não utilizasse estruturas
    char state_01[2] = {0};
    char city_01[3] = {0};
    char code_01[5] = {0};
    int popy_01 = 0x00000000;
    float area_01 = 0.0;
    float pib_01 = 0.0;
    int turist_point_01 = 0x00000000;
    float density_01 = 0.0;
    float gpd_01 = 0.0;
    
    // Inicializando as váriaveis da segunda carta.
    char state_02[2] = {0};
    char city_02[3] = {0};
    char code_02[5] = {0};
    int popy_02 = 0x00000000;
    float area_02 = 0.0;
    float pib_02 = 0.0;
    int turist_point_02 = 0x00000000;
    float density_02 = 0.0;
    float gpd_02 = 0.0;

    printf("Bem vindo ao Super Trunfo. Cadastre suas duas cartas\n");

    printf("Cadastre a primeira carta\n");

    printf("Escolha uma letra de 'A' até 'H' para representar o estado\n");
    scanf("%1s", state_01);

    printf("Escolha um número de 01 a 04 para representar a cidade\n");
    scanf("%2s", city_01);

    strcpy(code_01, state_01);
    strcat(code_01, city_01);

    printf("Qual o tamanho da população?\n");
    scanf("%d", &popy_01);

    printf("Qual a área em metros quadrados?\n");
    scanf("%f", &area_01);
    getchar();
    printf("Qual o PIB dessa cidade?\n");
    scanf(" %f", &pib_01);

    printf("Quantos pontos turisticos existem nessa cidade?\n");
    scanf("%i", &turist_point_01);

    density_01 = popy_01 / area_01;
    gpd_01 = pib_01 / popy_01;

    printf("Cadastre a segunda carta\n");

    printf("Escolha uma letra de 'A' até 'H' para representar o estado\n");
    scanf("%1s", state_02);

    printf("Escolha um número de 01 a 04 para representar a cidade\n");
    scanf("%2s", city_02);

    strcpy(code_02, state_02);
    strcat(code_02, city_02);

    printf("Qual o tamanho da população?\n");
    scanf("%d", &popy_02);

    printf("Qual a área em metros quadrados?\n");
    scanf("%f", &area_02);
    getchar();
    printf("Qual o PIB dessa cidade?\n");
    scanf(" %f", &pib_02);

    printf("Quantos pontos turisticos existem nessa cidade?\n");
    scanf("%i", &turist_point_02);

    density_02 = popy_02 / area_02;
    gpd_02 = pib_02 / popy_02;
    
    printf("Carta 1\n");
    printf("Estado : %s\n", state_01);
    printf("Code: %s\n", code_01);
    printf("Cidade: %s\n", city_01);
    printf("População: %d pessoas\n", popy_01);
    printf("Área: %.2f km²\n", area_01);
    printf("PIB: %.2f\n", pib_01);
    printf("Números de Pontos Turísticos: %i\n", turist_point_01);
    printf("Densidade Populacional: %.2f\n", density_01);
    printf("PIB per Capita: %.2f\n", gpd_01);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado : %s\n", state_02);
    printf("Code: %s\n", code_02);
    printf("Cidade: %s\n", city_02);
    printf("População: %d pessoas\n", popy_02);
    printf("Área: %.2f km²\n", area_02);
    printf("PIB: %.2f\n", pib_02);
    printf("Números de Pontos Turísticos: %i\n", turist_point_02);
    printf("Densidade Populacional: %.2f\n", density_02);
    printf("PIB per Capita: %.2f\n", gpd_02);
    
    return 0;
}
