#include "../include/card.h"

int compare_selected_attribute(int *selected_attributes, Card deck[]) {
  int count = 0;
  int score[2] = {0, 0}; // score[0] para Player 0, score[1] para Player 1

  while (count < NUM_CARDS) {
    int winner = -1;
    printf("Comparando %s atributo selecionado:\n",
           count == 0 ? "primeiro" : "segundo");

    switch (selected_attributes[count]) {
    case 0:
      winner = (deck[0].population > deck[1].population) ? 0 : 1;
      printf("População - jogador %d venceu.\n", winner);
      break;
    case 1:
      winner = (deck[0].area > deck[1].area) ? 0 : 1;
      printf("Área - jogador %d venceu.\n", winner);
      break;
    case 2:
      winner = (deck[0].pib > deck[1].pib) ? 0 : 1;
      printf("PIB - jogador %d venceu.\n", winner);
      break;
    case 3:
      winner = (deck[0].turist_point > deck[1].turist_point) ? 0 : 1;
      printf("Pontos Turísticos - jogador %d venceu.\n", winner);
      break;
    case 4:
      winner = (deck[0].density < deck[1].density) ? 0 : 1; // menor vence
      printf("Densidade Populacional - jogador %d venceu.\n", winner);
      break;
    case 5:
      winner = (deck[0].gpd > deck[1].gpd) ? 0 : 1;
      printf("PIB per Capita - jogador %d venceu.\n", winner);
      break;
    case 6:
      winner = (deck[0].super_power > deck[1].super_power) ? 0 : 1;
      printf("Super Poder - jogador %d venceu.\n", winner);
      break;
    }

    if (winner != -1) {
      score[winner]++;
    }
    count++;
  }

  // Decide o vencedor final
  if (score[0] > score[1])
    return 0;
  else if (score[1] > score[0])
    return 1;
  else
    return -1; // empate
}

// Imprime as propriedades dos cards;
void calling_cards(Card card) {
  printf("\nEstado: %s\n", card.state);
  printf("Code: %5s\n", card.code);
  printf("Cidade: %s\n", card.city);
  printf("População: %ld pessoas\n", card.population);
  printf("Área: %.2f km²\n", card.area);
  printf("PIB: %.2f\n", card.pib);
  printf("Números de Pontos Turísticos: %i\n", card.turist_point);
  printf("Densidade Populacional: %.2f\n", card.density);
  printf("PIB per Capita: %.8f\n", card.gpd);
  printf("Super Power: %.2f\n", card.super_power);
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
