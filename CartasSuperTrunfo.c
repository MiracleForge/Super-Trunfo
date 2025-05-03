// Criei os header files para deixar a main limpa e coesa;
#include "include/constants.h"
#include "include/main.h"
#include <stdio.h>

int main() {
  int game_status = 0x00000000;

  show_main_menu(&game_status);

  // Iniciando os cards criados usando uma array de srtuck para eu pode interar
  // sobre ela criando os cards com os inputs do usuário.;
  Card deck[NUM_CARDS];

  creating_cards(deck, NUM_CARDS);

  printf("*** Cartas Cadastradas ***\n");
  calling_cards(deck[0]);
  calling_cards(deck[1]);
  // TODO: Criação dos cards reformulada
  // TODO: Comparação dos atributos dos cards
  // TODO: Declaração do vencedor
  return 0;
}
