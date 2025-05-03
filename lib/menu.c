#include "../include/menu.h"

void rules(int *game_status) {
  printf("\n*** SUPER TRUNFO ***\n\n");

  printf("Regras do Jogo\n");

  printf("1. O jogo é jogado com um baralho de cartas, cada uma com vários "
         "atributos definidos.\n");
  printf("2. O jogador deve escolher dois atributos de cartas disponíveis para "
         "fazer a comparação.\n");
  printf("3. O atributo com o maior valor vence a comparação entre as duas "
         "cartas.\n");
  printf("4. **Exceção**: No caso do atributo 'Densidade Populacional', o "
         "menor valor vence!\n");
  printf("5. Em caso de empate no primeiro atributo, o segundo atributo "
         "escolhido é usado para desempatar.\n");
  printf(
      "6. O jogo continua até que todas as cartas tenham sido comparadas.\n");
  printf("7. O jogador que vencer mais rodadas será o vencedor do jogo!\n\n");

  printf("Boa sorte e que vença a melhor carta! Pressione\n");

  printf("\n*** SUPER TRUNFO ***\n");

  getchar();
}

void show_options(int *game_status) {
  if (*game_status == 0) {
    printf("\n|| Começar (1) || Regras do jogo (2) || Sair (3) ||\n");
  } else {
    printf("\n|| Começar (1) || Sair (3) ||\n");
  }
}

void show_main_menu(int *game_status) {
  // Baseado no valor do game_status o menu gerencia as opções disponiveis para
  // o usuário. Foi usada aqui o point para a variavel game_status para o
  // resultado do gerenciamento ser refletido de volta para o main()
  printf("Bem vindo ao Super Trunfo!!\n");
  printf("\nPressione o digito de cada opção do menu.\n");

  // While loop garante a permanencia na função enquanto o usuário não escolher
  // começar o game ou finalizar o programa.
  while (*game_status != 1) {
    show_options(game_status);
    // TODO: Desligar o ECHO do terminal. Para deixar mais bonitinho.
    scanf("%i", game_status);

    switch (*game_status) {
    case 1:
      printf("Começando...");
      *game_status = 1;
      break;
    case 2:
      rules(game_status);
      break;
    case 3:
      printf("Saindo do game!\n");
      exit(0);
      break;
    default:
      printf("Opção inválida, tente novamente.\n");
      break;
    }
  }
}
