#include <iostream>
using namespace std;

struct Card { char mark; int number; };

void bubbleSort(Card* c, int n);
void selectionSort(Card* c, int n);
void trace(Card* c, int n);

int main() {
  Card card[100];
  int n;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> card[i].mark >> card[i].number;
  }

  Card cb[100];
  Card cs[100];

  for (int i = 0; i < n; ++i) {
    cb[i] = card[i];
    cs[i] = card[i];
  }

  bubbleSort(cb, n);
  selectionSort(cs, n);

  trace(cb, n);
  cout << "Stable" << endl;
  trace(cs, n);
  bool flag = true;
  for (int i = 0; i < n; ++i) {
    if (cb[i].mark != cs[i].mark) { flag = false; break; }
  }
  if (flag)
    cout << "Stable" << endl;
  else
    cout << "Not stable" << endl;

  return 0;
}

void bubbleSort(Card* c, int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j >= i + 1; --j) {
      if (c[j].number < c[j - 1].number) {
        Card tc = c[j];
        c[j] = c[j - 1];
        c[j - 1] = tc;
      }
    }
  }
}

void selectionSort(Card* c, int n) {
  for (int i = 0; i < n; ++i) {
    int minj = i;
    for (int j = i + 1; j < n; ++j) {
      if (c[j].number < c[minj].number)
        minj = j;
    }
    Card tc = c[i];
    c[i] = c[minj];
    c[minj] = tc;
  }
}

void trace(Card* c, int n) {
  for (int i = 0; i < n; ++i) {
    if (i) cout << " ";
    cout << c[i].mark << c[i].number;
  }
  cout << endl;
}