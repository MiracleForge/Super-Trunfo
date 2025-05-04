#include "../include/menu.h"

// Função que mostra as regras do jogo
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

// Função que mostra o menu sempre que o usuário interage
void show_options(int *game_status) {
  // Essa condição só é atendida quando o programa é inicializado pela primeira
  // vez, é quando o valor inicial da variavel é zero.
  if (*game_status == 0) {
    printf("\n|| Começar (1) || Regras do jogo (2) || Sair (3) ||\n");
  } else {
    printf("\n|| Começar (1) || Sair (3) ||\n");
  }
}

// Função que mostra e controla o menu do game e a anicialização do jogo
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

void get_attribute_menu(int *selected_attributes) {
  int input;
  int count = 0;

  while (count < 2) {
    printf("\nEscolha um atributo para comparação (%d/2):\n", count + 1);
    printf("0. População\n");
    printf("1. Área\n");
    printf("2. PIB\n");
    printf("3. Pontos Turísticos\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    printf("6. Super Power\n");
    printf("Escolha (0-6): ");
    scanf("%d", &input);

    if (input >= 0 && input <= 6) {
      selected_attributes[count] = input;
      count++;
    } else {
      printf("Opção inválida. Tente novamente.\n");
    }
  }
}
