#include <iostream>


int strlen (char *str) {
  int len = 0;
  while (*str != '\0') {
    str++;
    len++;
  }
  return len;
}


int main() {
  char deck[200];
  int m, h, mid;
  int h_sum, card_num;

  while (true) {
    std::cin >> deck;
    if (deck[0] == '-') break;
    std::cin >> m;
    h_sum = 0;
    for (int i = 0; i < m; i ++) {
      std::cin >> h;
      h_sum += h;
    }
    card_num = strlen(deck);
    mid = h_sum % card_num;
    for (int i = mid; i < card_num; i ++) {
      std::cout << deck[i];
    }
    for (int i = 0; i < mid; i ++) {
      std::cout << deck[i];
    }
    std::cout << std::endl;

  }
  return 0;
}

