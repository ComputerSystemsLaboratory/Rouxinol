#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  char suit;
  int value;
} Card;

void bubble_sort(Card a[], int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = n - 1; j > i; j--) {
      if (a[j].value < a[j - 1].value) {
        swap(a[j], a[j - 1]);
      }
    }
  }
}

void selection_sort(Card a[], int n) {
  int i, j, m;

  for (i = 0; i < n; i++) {
    m = i;

    for (j = i; j < n; j++) {
      if (a[m].value > a[j].value) {
        m = j;
      }
    }

    swap(a[i], a[m]);
  }
}

void p(Card a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    cout << a[i].suit << a[i].value;
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout << endl;
}

int main() {
  bool f = false;
  int n, i;
  Card c1[36], c2[36];

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> c1[i].suit >> c1[i].value;
    c2[i].suit = c1[i].suit;
    c2[i].value = c1[i].value;
  }

  bubble_sort(c1, n);
  p(c1, n);
  cout << "Stable" << endl;

  selection_sort(c2, n);
  p(c2, n);
  for (i = 0; i < n; i++) {
    if (c1[i].suit != c2[i].suit) {
      f = true;
    }
  }
  if (f) {
    cout << "Not stable" << endl;
  } else {
    cout << "Stable" << endl;
  }

  return 0;
}