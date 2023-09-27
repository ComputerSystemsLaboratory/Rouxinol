#include <iostream>

int memo[7][7] = {-1};
int x[3][5] = {{1,2,6,5,1}, {1,3,6,4,1}, {2,3,5,4,2}};
int sides[3][2] = {{4, 3}, {2, 5}, {6, 1}};


int detect_right_side_index(int *dice, int top, int front) {
  int top_index, front_index;
  bool top_flag = false, front_flag = false;

  for (int i = 1; i <= 6; i ++) {
    if (!top_flag && dice[i] == top) top_index = i, top_flag = true;
    if (!front_flag && dice[i] == front) front_index = i, front_flag = true;
  }
  return memo[top_index][front_index];
}


int main() {
  int dice[7];
  int top, front, q;
  char command;

  for (int j = 0; j < 3; j ++) {
    for (int i = 1; i < 5; i ++) {

      memo[x[j][i]][x[j][i-1]] = sides[j][0]; 
      memo[x[j][i-1]][x[j][i]] = sides[j][1]; 
    }
  }
  for (int i = 1; i < 7; i ++) 
    std::cin >> dice[i];
  std::cin >> q;
  for (int i = 0; i < q; i ++) {
    std::cin >> top >> front;
    std::cout << dice[detect_right_side_index(dice, top, front)] << std::endl;
  }
  return 0;
}

