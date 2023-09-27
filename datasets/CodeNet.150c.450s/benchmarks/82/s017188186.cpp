#include <iostream>

const int N = 7;

typedef struct {
  int panels[N];
  int upper;
  int east;
  int south;
} Dice;

void rotate_dice(int *x, int *y, int d) {
  *x = *y;
  *y = d;
}

int main(void) {
  int RIGHT_PANLES[N] = {0, 3, 3, 5, 2, 4, 3};
  
  Dice dice;

  for (int i = 1; i < N; i++) {
    std::cin >> dice.panels[i];
  }

  int n = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    dice.upper = 1;
    dice.east = 3;
    dice.south = 2;
    
    int u = 0;
    int s = 0;
    
    std::cin >> u >> s;

    const int ROTATION_MAX = 4;

    for (int i = 1; i < ROTATION_MAX; i++) {
      if (dice.panels[dice.upper] == u) {
	break;
      }
      
      rotate_dice(&dice.south, &dice.upper, N - dice.south);
    }

    if (dice.upper != u) {
      for (int i = 1; i < ROTATION_MAX; i++) {
	if (dice.panels[dice.upper] == u) {
	  break;
	}
      
	rotate_dice(&dice.east, &dice.upper, N - dice.east);
      }
    }

    for (int i = 0; i < ROTATION_MAX; i++) {
      if (dice.panels[dice.south] == s) {
	break;
      }
      
      rotate_dice(&dice.south, &dice.east, N - dice.south);
    }

    std::cout << dice.panels[dice.east] << std::endl;
  }
  
  return 0;
}