#include <iostream>


void do_command(int *dice, char command) {
  int targets[4] = {0, -1, 5, -1};
  int temp;

  switch (command) {
    case 'E':
      targets[1] = 3;
      targets[3] = 2;
      break;
    case 'W':
      targets[1] = 2;
      targets[3] = 3;
      break;
    case 'S':
      targets[1] = 4;
      targets[3] = 1;
      break;
    case 'N':
      targets[1] = 1;
      targets[3] = 4;
      break;
  }

  temp = dice[targets[0]];
  for (int i = 1; i < 4; i ++) 
    dice[targets[i - 1]] = dice[targets[i]];
  dice[targets[3]] = temp;

}


int main() {
  int dice[6];
  char command;
  for (int i = 0; i < 6; i ++) 
    std::cin >> dice[i];

  while (std::cin >> command) {
    do_command(dice, command);
  }

  std::cout << dice[0] << std::endl;
  return 0;
}

