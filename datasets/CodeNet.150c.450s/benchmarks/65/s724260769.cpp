// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_2-C: Stable Sort

#include <cstring>
#include <algorithm>
#include <iostream>

struct Card {
  char suit;
  unsigned int rank;
  bool operator<(const Card& rhs) { return rank < rhs.rank; }
  bool same(const Card& rhs) { return rank == rhs.rank && suit == rhs.suit; }
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
  for (auto i = 0u; i < n; ++i) {
    std::cout << sep << cards[i];
    sep = " ";
  }
  std::cout << std::endl;
}

static void copy_cards(Card dst[], const Card src[], const unsigned int n)
{
  std::memcpy(dst, src, sizeof(dst[0])*n);
}

static bool is_equal_cards(const Card cards1[], const Card cards2[], const unsigned int n)
{
  //std::memcmp(cards1, cards2, sizeof(cards1)) == 0
  for (auto i = 0u; i < n; ++i) {
    if (!(cards1[i].rank == cards2[i].rank &&
          cards1[i].suit == cards2[i].suit)) {
      return false;
    }
  }
  return true;
}

static void bubble_sort(Card cards[], const unsigned int n)
{
  for (auto j = 0u; j < n-1; ++j) {
    for (auto i = n-1; i > j; --i) {
      if (cards[i] < cards[i-1]) {
        std::swap(cards[i], cards[i-1]);
      }
    }
  }
}

static void selection_sort(Card cards[], const unsigned int n)
{
  for (auto i = 0u; i < n-1; ++i) {
    auto min_j = i;
    for (auto j = i+1; j < n; ++j) {
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
  for (auto i = 0u; i < n; ++i) {
    std::cin >> cards1[i];
  }
  copy_cards(cards2, cards1, n);
  bubble_sort(cards1, n);
  print_cards(cards1, n);
  std::cout << "Stable" << std::endl; // bubble sort is stable

  selection_sort(cards2, n);
  print_cards(cards2, n);

  if (is_equal_cards(cards1, cards2, n)) {
    std::cout << "Stable" << std::endl;
  } else {
    std::cout << "Not stable" << std::endl;
  }
}

// eof