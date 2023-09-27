#include <iostream>
#include <cstdio>
using namespace std;

static const int N = 36 + 1;

class Card {
  public:
    int value;
    char suit;
};

void bubbleSort(Card* c, int n);
void selectionSort(Card* c, int n);
void stable(Card* c1, Card* c2, int n);
void trace(Card* c, int n);

int main() {
  Card c1[N], c2[N];
  int n;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> c1[i].suit >> c1[i].value;
    c2[i] = c1[i];
  }

  bubbleSort(c1, n);
  selectionSort(c2, n);

  trace(c1, n);
  printf("Stable\n");
  trace(c2, n);
  stable(c1, c2, n);

  return 0;
}

void trace(Card* c, int n) {
  for (int i = 0; i < n; ++i) {
    if (i) { printf(" "); }
    printf("%c%d", c[i].suit, c[i].value);
  }
  printf("\n");
}

void bubbleSort(Card* c, int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j > i; --j) {
      if (c[j].value < c[j - 1].value) {
        Card t = c[j];
        c[j] = c[j - 1];
        c[j - 1] = t;
      }
    }
  }
}

void selectionSort(Card* c, int n) {
  for (int i = 0; i < n; ++i) {
    int mini = i;
    for (int j = i + 1; j < n; ++j) {
      if (c[j].value < c[mini].value) { mini = j; }
    }
    Card t = c[i];
    c[i] = c[mini];
    c[mini] = t;
  }
}

void stable(Card* c1, Card* c2, int n) {
  for (int i = 0; i < n; ++i) {
    if ((c1[i].value != c2[i].value) || (c1[i].suit != c2[i].suit)) { printf("Not stable\n"); return; }
  }
  printf("Stable\n");
}