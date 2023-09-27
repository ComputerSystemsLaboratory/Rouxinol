// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_2-C: Stable Sort

#include <cstring>
#include <algorithm>
#include <iostream>

struct Card {
  char suit;
  unsigned int rank;
  bool operator<(const Card& rhs) { return rank < rhs.rank; }
};

std::ostream& operator<<(std::ostream& os, const Card& card)
{
  return os << card.suit << card.rank;
}

std::istream& operator>>(std::istream& is, Card& card)
{
  return is >> card.suit >> card.rank;
}

static void print_cards(const Card cards[], const unsigned int n)
{
  const char* sep = "";
  for (unsigned int i = 0u; i < n; ++i) {
    std::cout << sep << cards[i];
    sep = " ";
  }
  std::cout << std::endl;
}

static void bubble_sort(Card cards[], const unsigned int n)
{
  for (unsigned int j = 0u; j < n-1; ++j) {
    for (unsigned int i = n-1; i > j; --i) {
      if (cards[i] < cards[i-1]) {
        std::swap(cards[i], cards[i-1]);
      }
    }
  }
}

static void selection_sort(Card cards[], const unsigned int n)
{
  for (unsigned int i = 0u; i < n-1; ++i) {
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

int main()
{
  unsigned int n;
  std::cin >> n;
  Card cards1[n], cards2[n];
  for (unsigned int i = 0u; i < n; ++i) {
    std::cin >> cards1[i];
  }
  //std::memcpy(cards2, cards1, sizeof(cards1));
  for (unsigned int i = 0u; i < n; ++i) {
    cards2[i] = cards1[i];
  }

  bubble_sort(cards1, n);
  print_cards(cards1, n);
  std::cout << "Stable" << std::endl; // bubble sort is stable

  selection_sort(cards2, n);
  print_cards(cards2, n);
  /*
  if (std::memcmp(cards1, cards2, sizeof(cards1)) == 0) {
    std::cout << "Stable" << std::endl;
  } else {
    std::cout << "Not stable" << std::endl;
  }
  */
  for (unsigned int i = 0u; i < n; ++i) {
    if (!(cards2[i].rank == cards1[i].rank &&
          cards2[i].suit == cards1[i].suit)) {
      std::cout << "Not stable" << std::endl;
      return 0;
    }
  }
  std::cout << "Stable" << std::endl;
}

// eof