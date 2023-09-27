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
  Dice dice;

  for (int i = 1; i < N; i++) {
    std::cin >> dice.panels[i];
  }

  dice.upper = 1;
  dice.east = 3;
  dice.south = 2;

  std::string input;
  std::cin >> input;
  
  for (int i = 0; i < input.size(); i++) {
    char m = input[i];

    if (m == 'E') {
      rotate_dice(&dice.east, &dice.upper, N - dice.east);
    } else if (m == 'W') {
      rotate_dice(&dice.upper, &dice.east, N - dice.upper);
    } else if (m == 'S') {
      rotate_dice(&dice.south, &dice.upper, N - dice.south);
    } else {
      rotate_dice(&dice.upper, &dice.south, N - dice.upper);
    }
  }

  std::cout << dice.panels[dice.upper] << std::endl;
  
  return 0;
}