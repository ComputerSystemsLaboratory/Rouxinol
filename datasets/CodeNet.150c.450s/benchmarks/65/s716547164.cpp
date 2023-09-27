#include <iostream>
using namespace std;

struct Card {
  char suit;
  int value;
};

void bubbleSort(Card c[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j > i ; j--) {
      if (c[j].value < c[j-1].value) {
        swap(c[j], c[j-1]);
      }
    }
  }
}

void selectionSort(Card c[], int n) {
  for (int i = 0; i < n; i++) {
    int mini = i;

    for (int j = i; j < n; j++) {
      if (c[j].value < c[mini].value) {
        mini = j;
      }
    }

    if (i != mini) {
      swap(c[i], c[mini]);
    }
  }
}

void printArray(Card c[], int n) {
  for (int i = 0; i < n - 1; i++){
    cout << c[i].suit << c[i].value << ' ';
  }
  cout << c[n - 1].suit << c[n - 1].value << endl;
}

bool isStable(Card a[], Card b[], int n) {
  for (int i = 0; i < n; i ++) {
    if (!(a[i].suit == b[i].suit && a[i].value == b[i].value)) return false;
  }
  return true;
}

int main() {
  Card a[100], b[100];
  int n, count = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].suit >> a[i].value;
    b[i].suit = a[i].suit;
    b[i].value = a[i].value;
  }

  bubbleSort(a, n);
  printArray(a, n);
  cout << "Stable" << endl;

  selectionSort(b, n);
  printArray(b, n);
  if (isStable(a, b, n)) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  return 0;
}