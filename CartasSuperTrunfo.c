// Criei os header files para deixar a main limpa e coesa, lógicas contidas em
// suas respectivas funções;
#include "include/constants.h"
#include "include/main.h"
#include <stdio.h>

void decide_winner(int decision) {
  if (decision != -1) {
    printf("\nO vencedor é o jogador %i\n", decision);
  } else {
    printf("\nDeu empate!\n");
  }
}

int main() {
  // Minhas variáveis iniciadas com valores conhecidos evitando valores lixo na
  // memória;
  int game_status = 0x00000000;
  int attribute_selected[2] = {0, 0};
  show_main_menu(&game_status);

  // Iniciando os cards criados usando uma array de srtuck para eu pode interar
  // sobre ela criando os cards com os inputs do usuário.;
  Card deck[NUM_CARDS];

  creating_cards(deck, NUM_CARDS);

  calling_cards(
      deck[0]); // Printo todos os atributos das cartas individualmente;
  calling_cards(deck[1]);

  // Guardei no array o index dos atributos selecioados em relação a struck;
  get_attribute_menu(attribute_selected);

  int winner = compare_selected_attribute(attribute_selected, deck);
  decide_winner(winner);
  return 0;
}
