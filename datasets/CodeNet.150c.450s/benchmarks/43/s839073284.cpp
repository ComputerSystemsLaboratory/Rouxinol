#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

int main(void)
{
  int n;

  while (true) {
    int n;
    std::cin >> n;
    if (n == 0) break;
    std::vector<int> cards_A, cards_B;
    for (int i = 0; i < n; i++) {
      int card_A, card_B;
      std::cin >> card_A >> card_B;
      cards_A.push_back(card_A);
      cards_B.push_back(card_B);
    }
    int score_A = 0;
    int score_B = 0;
    for (int i = 0; i < n; i++) {
      if (cards_A.at(i) == cards_B.at(i)) {
        score_A += cards_A.at(i);
        score_B += cards_B.at(i);
      }
      else {
        int score_sum = cards_A.at(i) + cards_B.at(i);
        if (cards_A.at(i) > cards_B.at(i)) score_A += score_sum;
        if (cards_A.at(i) < cards_B.at(i)) score_B += score_sum;
      }
    }
    std::cout << score_A << " " << score_B << std::endl;
  }

  return 0;
}