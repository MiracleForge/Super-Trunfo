# Super Trunfo - Atributos de Cidades (Projeto em C)

Este projeto é uma implementação simples do jogo **Super Trunfo** utilizando a linguagem **C**, com foco em atributos de cidades como população, área, PIB etc.

## Objetivo

Simular uma partida entre dois jogadores utilizando cartas com atributos numéricos. O jogador que escolher os melhores atributos vence a rodada.

## Estrutura do Projeto

.
├── main.c
├── include
│ ├── constants.h
│ ├── main.h
│ ├── menu.h
│ └── card.h
├── lib
│ ├── menu.c
│ └── cards.c
└── README.md

## Como Jogar

1. O jogo inicia com um **menu principal** com as opções:

   - Começar o jogo
   - Ver as regras
   - Sair

2. O usuário insere os dados de duas cartas, contendo atributos numéricos e strings como cidade e estado.

3. Em seguida, dois atributos são escolhidos para serem comparados entre as cartas.

4. O sistema compara os atributos e exibe qual jogador venceu com base em:

   - **Maior valor vence**, **exceto** no atributo **Densidade Populacional**, em que **o menor vence**.

5. O resultado da comparação define o vencedor da rodada.

## Compilação

Compile utilizando o `gcc`:

```bash
gcc -o  supertrunfo CartasSuperTrunfo.c
./super_trunfo


# Mehorias
Proteção contra inserção de tipos incorretos, poderia otimizar assegurando que o tipo incorreto inserido pelo usuário não quere o fluxo do game
```

## Ambiente de Desenvolvimento

- **Mason.nvim**: gerenciador de pacotes usado para instalar servidores de linguagem e ferramentas como:
- `clangd` (autocompletar e navegação)
- `clang-format` (formatação automática de código)
- **Autocompletion** com `nvim-cmp` + `LSP`
- **Formatação automática** com `null-ls` e `clang-format`
- **Organização modular** do código com headers e bibliotecas separadas
