#include "../include/card.h"

void calling_cards(Card card) {
  // TODO: Printar as informações dos CARDS
}

float calc_super_power(Card card) {
  float reverse_density = BASE_RECIPROCAL / card.density;

  return card.population + card.area + card.pib + card.turist_point +
         reverse_density + card.gpd;
}

// Converte a letra enviada no parametro para maiuscula, para gerar o código
// inteiro igualmente maiusculo;
int convert_to_uppercase(char letter) {
  if (letter >= 'a' && letter <= 'z') { // Comparo o valor que vem em letter com
                                        // o range de letras minusculas;
    letter = letter - ASCII_DIFF;
    // Uso a diferença entre os valores maiusculoes e minuculoes e
    // consigo alterar o valor de letter usando ASCII;
  }
  return letter;
}

// Essa função recebe um array da struck Card, e a quantidade de cards desse
// baralho;
void creating_cards(Card deck[], int quantity) {
  printf("***Crie os cards***\n");

  for (int i = 0; i < quantity; i++) {
    printf("Criando o %s card\n", i == 0 ? "primeiro" : "segundo");

    printf("Qual o nome do Estado?\n");
    getchar();
    fscanf(stdin, "%[^\n]", deck[i].state);

    printf("Qual o nome da Cidade?\n");
    getchar();
    fscanf(stdin, "%[^\n]", deck[i].city);

    deck[i].code[0] = convert_to_uppercase(deck[i].state[0]);
    deck[i].code[1] = convert_to_uppercase(deck[i].city[0]);
    deck[i].code[2] = convert_to_uppercase(deck[i].city[1]);
    deck[i].code[3] = '\0';

    printf("Qual a população dessa cidade?\n");
    scanf("%ld", &deck[i].population);

    printf("Qual a área dessa cidade?\n");
    scanf("%f", &deck[i].area);

    printf("Qual a PIB dessa cidade?\n");
    scanf("%f", &deck[i].pib);

    printf("Quantos Pontos Turisticos existem nessa cidade?\n");
    scanf("%i", &deck[i].turist_point);

    deck[i].density = deck[i].population / deck[i].area;
    deck[i].gpd = deck[i].pib / (float)deck[i].population;

    deck[i].super_power = calc_super_power(deck[i]);
  }
}
