#include <iostream>
#include <stdio.h>

#define MAX_N 100000
#define MAX_CARD_NUM 1000000000

using namespace std;

struct Card {
  char type;
  int number;
  void print() {
    printf("%c %d", type, number);
  }
};

void print_cards(Card cards[], int n) {
  for(int i=0; i<n; i++) {
    printf("%c %d\n", cards[i].type, cards[i].number);
  }
}

int partition(Card cards[], int p, int r) {
  int i = p-1;
  int x = cards[r].number;
  for(int j=p; j<r; j++) {
    if(cards[j].number <= x) {
      i++;
      Card tmp = cards[j];
      cards[j] = cards[i];
      cards[i] = tmp;
    }
  }
  Card tmp = cards[r];
  cards[r] = cards[i+1];
  cards[i+1] = tmp;
  return i+1;
}

void quicksort(Card cards[], int p, int r) {
  if(p < r) {
    int q = partition(cards, p, r);
    quicksort(cards, p, q-1);
    quicksort(cards, q+1, r);
  }
}

bool is_stable(Card original[], Card sorted[], int n) {
  int max = sorted[n-1].number;
  char order[MAX_N];
  for(int i=0; i<max+1; i++) {
    int order_i = 0;
    for(int j=0; j<n; j++) {
      if(original[j].number == i) {
        order[order_i] = original[j].type;
        order_i++;
      }
    }

    int p = 0;
    for(int j=0; j<n; j++) {
      if(sorted[j].number == i) {
        if(sorted[j].type != order[p]) {
          return false;
        }
        p++;
      }
    }
  }
  return true;
}

int main() {
  int n, number;
  char type;
  Card cards[MAX_N];
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> type >> number;
    cards[i].type = type;
    cards[i].number = number;
  }

  Card cards_to_sort[MAX_N];
  for(int i=0; i<n; i++) {
    cards_to_sort[i] = cards[i];
  }

  quicksort(cards_to_sort, 0, n-1);

  if(is_stable(cards, cards_to_sort, n))
    printf("Stable\n");
  else
    printf("Not stable\n");
  print_cards(cards_to_sort, n);
  return 0;
}