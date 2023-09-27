// -*- mode:c++; coding:utf-8; indent-tabs-mode:nil; -*-
// ALDS1_2-C

#include <cstring>
#include <algorithm>
#include <iostream>

struct card {
  char mark;
  unsigned int number;

  bool operator<(const card& rhs) { return number < rhs.number; }
};

std::ostream& operator<<(std::ostream& os, const card& card)
{
  return os << card.mark << card.number;
}

std::istream& operator>>(std::istream& is, card& card)
{
  return is >> card.mark >> card.number;
}

static void print_cards(const card cards[], const unsigned int n) {
  const char* sep = "";
  for (unsigned int i = 0; i < n; ++i) {
    std::cout << sep << cards[i];
    sep = " ";
  }
  std::cout << std::endl;
}

void bubble_sort(card cards[], const unsigned int n) {
  for (unsigned int j = 0; j < n-1; ++j) {
    for (unsigned int i = n-1; i > j; --i) {
      if (cards[i] < cards[i-1]) {
        std::swap(cards[i], cards[i-1]);
      }
    }
  }
}

void selection_sort(card cards[], const unsigned int n) {
  for (unsigned int i = 0; i < n-1; ++i) {
    unsigned int min_j = i;
    for (unsigned int j = i+1; j < n; ++j) {
      if (cards[j] < cards[min_j]) {
        min_j = j;
      }
    }
    if (i != min_j) {
      std::swap(cards[i], cards[min_j]);
    }
  }
}

int main(void) {
  unsigned int n;
  std::cin >> n;
  card cards1[n], cards2[n];
  for (unsigned int i = 0; i < n; ++i) {
    std::cin >> cards1[i];
  }
  std::memcpy(cards2, cards1, sizeof(cards1));

  bubble_sort(cards1, n);
  print_cards(cards1, n);
  std::cout << "Stable" << std::endl; // bubble sort is stable

  selection_sort(cards2, n);
  print_cards(cards2, n);
  if (std::memcmp(cards1, cards2, sizeof(cards1)) == 0) {
    std::cout << "Stable" << std::endl;
  } else {
    std::cout << "Not stable" << std::endl;
  }

  return 0;
}
// end