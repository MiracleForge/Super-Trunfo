#include <stdio.h>
#include <string.h>
#define BASE_RECIPROCAL 1.0

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

float calc_super_power (unsigned long int popy, float area, float pib, int turistic_point, float density, float gpd) {
    float reverse_density = BASE_RECIPROCAL / density ;
    
    return popy + area + pib + turistic_point + reverse_density + gpd;
}

int main() {
    // Inicializando variaveis com valores conhecidos da primeira carta
    char state_01[2] = {0};
    char city_01[3] = {0};
    char code_01[5] = {0};
    unsigned long int popy_01 = 0x00000000;
    float area_01 = 0.0;
    float pib_01 = 0.0;
    int turist_point_01 = 0x00000000;
    float density_01 = 0.0;
    float gpd_01 = 0.0;
    float super_power_01 = 0.0;
    
    // Inicializando as váriaveis da segunda carta.
    char state_02[2] = {0};
    char city_02[3] = {0};
    char code_02[5] = {0};
    unsigned long int popy_02 = 0x00000000;
    float area_02 = 0.0;
    float pib_02 = 0.0;
    int turist_point_02 = 0x00000000;
    float density_02 = 0.0;
    float gpd_02 = 0.0;
    // Super power
    float super_power_02 = 0.0;

    printf("Bem vindo ao Super Trunfo. Cadastre suas duas cartas\n");

    printf("Cadastre a primeira carta\n");

    printf("Escolha uma letra de 'A' até 'H' para representar o estado\n");
    scanf("%1s", state_01);

    printf("Escolha um número de 01 a 04 para representar a cidade\n");
    scanf("%2s", city_01);

    strcpy(code_01, state_01);
    strcat(code_01, city_01);

    printf("Qual o tamanho da população?\n");
    scanf("%ld", &popy_01);

    printf("Qual a área em metros quadrados?\n");
    scanf("%f", &area_01);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib_01);

    printf("Quantos pontos turisticos existem nessa cidade?\n");
    scanf("%i", &turist_point_01);



    printf("Cadastre a segunda carta\n");

    printf("Escolha uma letra de 'A' até 'H' para representar o estado\n");
    scanf("%1s", state_02);

    printf("Escolha um número de 01 a 04 para representar a cidade\n");
    scanf("%2s", city_02);

    strcpy(code_02, state_02);
    strcat(code_02, city_02);

    printf("Qual o tamanho da população?\n");
    scanf("%ld", &popy_02);

    printf("Qual a área em metros quadrados?\n");
    scanf("%f", &area_02);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib_02);

    printf("Quantos pontos turisticos existem nessa cidade?\n");
    scanf("%i", &turist_point_02);

    density_01 = popy_01 / area_01;
    gpd_01 = pib_01 / (float)popy_01;

    density_02 = popy_02 / area_02;
    gpd_02 = pib_02 / (float)popy_02;

     // Comparação entre as cartas
    super_power_01 = calc_super_power(popy_01, area_01, pib_01, turist_point_01, density_01, gpd_01);
    super_power_02 = calc_super_power(popy_02, area_02, pib_02, turist_point_02, density_02, gpd_02);


    printf("\n(Carta 1):\n");
    printf("Estado : %s\n", state_01);
    printf("Code: %s\n", code_01);
    printf("Cidade: %s\n", city_01);
    printf("População: %ld pessoas\n", popy_01);
    printf("Área: %.2f km²\n", area_01);
    printf("PIB: %.2f\n", pib_01);
    printf("Números de Pontos Turísticos: %i\n", turist_point_01);
    printf("Densidade Populacional: %.2f\n", density_01);
    printf("PIB per Capita: %.8f\n", gpd_01);
    printf("Super Power: %.2f\n", super_power_01);

    printf("\n(Carta 2):\n");
    printf("Estado : %s\n", state_02);
    printf("Code: %s\n", code_02);
    printf("Cidade: %s\n", city_02);
    printf("População: %ld pessoas\n", popy_02);
    printf("Área: %.2f km²\n", area_02);
    printf("PIB: %.2f\n", pib_02);
    printf("Números de Pontos Turísticos: %i\n", turist_point_02);
    printf("Densidade Populacional: %.2f\n", density_02);
    printf("PIB per Capita: %.8f\n", gpd_02);
    printf("Super Power: %.2f\n", super_power_02);

       printf("\nComparação\n");

    printf("População: %d\n", popy_01 > popy_02 ? 1 : 0);
    printf("Área: %d\n", area_01 > area_02 ? 1 : 0);
    printf("PIB: %d\n", pib_01 > pib_02 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", turist_point_01 > turist_point_02 ? 1 : 0 );
    printf("Densidade: %d\n", density_01 < density_02 ? 1 : 0 );
    printf("Pib Per Capita: %d\n", gpd_01 > gpd_02 ? 1 : 0 );
    printf("Super Power: %d\n", super_power_01 > super_power_02 ? 1 : 0 );


    return 0;
}

