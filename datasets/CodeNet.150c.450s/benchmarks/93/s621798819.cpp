#include <bits/stdc++.h>
using namespace std;

class Card {
 public:
  int id;
  int number;
  char suit;

  bool operator<(const Card& B) const { return number < B.number; }
  bool operator>(const Card& B) const { return number > B.number; }
  bool operator<=(const Card& B) const { return number <= B.number; }
  bool operator>=(const Card& B) const { return number >= B.number; }
};

template <class T>
void Swap(T* a, T* b) {
  T t = *a;
  *a = *b;
  *b = t;
}

template <class T>
int partition(T* array, int p, int r) {
  T x = array[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (array[j] <= x) {
      i = i + 1;
      Swap(&array[i], &array[j]);
    }
  }
  Swap(&array[i + 1], &array[r]);
  return i + 1;
}

template <class T>
void quickSort(T* array, int p, int r) {
  if (p < r) {
    int q = partition(array, p, r);
    quickSort(array, p, q - 1);
    quickSort(array, q + 1, r);
  }
}

int main() {
  int n;
  cin >> n;
  Card cards[n];
  for (int i = 0; i < n; i++) {
    cards[i].id = i;
    cin >> cards[i].suit >> cards[i].number;
  }
  quickSort(cards, 0, n - 1);

  bool is_stable = true;
  int compare_number = 0;
  int compare_id = 0;
  for (int i = 0; i < n; i++) {
    if (cards[i].number != compare_number) {
      compare_id = cards[i].id;
      compare_number = cards[i].number;
      continue;
    }
    if (compare_id > cards[i].id) {
      is_stable = false;
      break;
    }
  }
  if (is_stable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
  for (int i = 0; i < n; i++) {
    cout << cards[i].suit << " " << cards[i].number << endl;
  }
  return 0;
}
