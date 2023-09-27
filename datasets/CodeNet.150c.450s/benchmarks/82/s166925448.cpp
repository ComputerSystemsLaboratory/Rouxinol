#include <iostream>
#include <vector>

int getIndex(std::vector<int> &vec, int searchElement) {
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == searchElement) return i;
  }
  return -1;
}

int main() {
  //     | 5 |
  // | 4 | 1 | 3 | 6 |
  //     | 2 |
  //
  //     | 1 |
  // | 4 | 2 | 3 | 5 |
  //     | 6 |
  //
  //     | 1 |
  // | 2 | 3 | 5 | 4 |
  //     | 6 |
  //
  //     | 1 |
  // | 5 | 4 | 2 | 3 |
  //     | 6 |
  //
  //     | 1 |
  // | 3 | 5 | 4 | 2 |
  //     | 6 |
  //
  //     | 5 |
  // | 3 | 6 | 4 | 1 |
  //     | 2 |
  std::vector<std::vector<int>> dice = {{5, 3, 2, 4}, {1, 3, 6, 4},
                                        {1, 5, 6, 2}, {1, 2, 6, 5},
                                        {1, 4, 6, 3}, {5, 4, 2, 3}};
  std::vector<int> givenDice;
  for (int i = 0; i < 6; i++) {
    int buf;
    std::cin >> buf;
    givenDice.push_back(buf);
  }
  int q;
  std::cin >> q;
  while (q-- > 0) {
    int top, front;
    std::cin >> top >> front;
    int topIndex = getIndex(givenDice, top);
    int frontIndex = getIndex(givenDice, front);

    auto candicates = dice[topIndex];
    int candicateFrontIndex = getIndex(candicates, frontIndex + 1);
    int candicateRightIndex = candicateFrontIndex == 0
                                  ? candicates.size() - 1
                                  : candicateFrontIndex - 1;
    int rightIndex = candicates[candicateRightIndex] - 1;
    std::cout << givenDice[rightIndex] << std::endl;
  }

  return 0;
}

