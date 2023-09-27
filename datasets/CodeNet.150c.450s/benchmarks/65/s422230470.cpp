#include <algorithm>
#include <iostream>
#include <vector>

struct Card {
  char suit;
  int num;
};

void printArray(std::vector<Card> cards) {
  int n = (int)cards.size();
  for (int i = 0; i < n; i++) {
    std::cout << cards[i].suit << cards[i].num;
    if (i < n - 1)
      std::cout << " ";
    else
      std::cout << std::endl;
  }
}

void bubbleSort(std::vector<Card> &a) {
  bool flag = true;
  int count = 0;
  while (flag) {
    flag = false;
    for (int i = (int)a.size() - 1; i >= 0; i--) {
      if (a[i].num < a[i - 1].num) {
        std::swap(a[i], a[i - 1]);
        count++;
        flag = true;
      }
    }
  }
}

void selectionSort(std::vector<Card> &a) {
  int min, n = (int)a.size(), count = 0;
  for (int i = 0; i < n; i++) {
    min = i;
    for (int j = i; j < n; j++) {
      if (a[j].num < a[min].num) {
        min = j;
      }
    }
    if (i != min) {
      std::swap(a[i], a[min]);
      count++;
    }
  }
}

int main() {
  int n;
  std::cin >> n;
  std::vector<Card> cards(n), cards2(n);
  char suit;
  int num;
  for (int i = 0; i < n; i++) {
    std::cin >> suit >> num;
    Card c = {suit, num};
    cards[i] = c;
    cards2[i] = c;
  }

  bubbleSort(cards);
  printArray(cards);
  std::cout << "Stable" << std::endl;

  selectionSort(cards2);
  printArray(cards2);
  for (int i = 0; i < n; i++) {
    if (cards[i].suit != cards2[i].suit) {
      std::cout << "Not stable" << std::endl;
      return 0;
    }
  }
  std::cout << "Stable" << std::endl;
}

