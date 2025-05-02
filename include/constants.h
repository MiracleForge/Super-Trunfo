#include <stdio.h>
#include <string.h>

#define base_reciprocal 1.0

typedef struct Card {
  char state[2];
  char city[3];
  char code[5];
  unsigned long int population;
  float area;
  float pib;
  int turist_point;
  float density;
  float gpd;
  float super_power;
} card;
