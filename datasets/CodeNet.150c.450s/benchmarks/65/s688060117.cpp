#include <iostream>
using namespace std;

typedef struct {
  char mark;
  int number;
} card;

int N;
card c1[40], c2[40];

void bubbleSort(card* c);
void selectionSort(card* c);
void trace(card* c);
bool compare();

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) {
    char ch; int num;
    cin >> ch >> num;
    c1[i].mark = ch;
    c2[i].mark = ch;
    c1[i].number = num;
    c2[i].number = num;
  }
  
  bubbleSort(c1);
  selectionSort(c2);
  
  bool s = compare();
  
  trace(c1);
  cout << "Stable\n";
  trace(c2);
  if (s) { cout << "Stable\n"; }
  else { cout << "Not stable\n"; }
  
  return 0;
}

// stable sort
void bubbleSort(card* c) {
  for (int i = 0; i < N; ++i) {
    for (int j = N - 1; j >= i + 1; --j) {
      if (c[j].number < c[j - 1].number) {
        swap(c[j], c[j - 1]);
      }
    }
  }
}

// not stable sort
void selectionSort(card* c) {
  for (int i = 0; i < N; ++i) {
    int minv = i;
    for (int j = i + 1; j < N; ++j) {
      if (c[j].number < c[minv].number) { minv = j; }
    }
    if (minv != i) { swap(c[minv], c[i]); }
  }
}

// print
void trace(card* c) {
  for (int i = 0; i < N; ++i) {
  if (i) { cout << " "; }
    cout << c[i].mark << c[i].number;
  }
  cout << "\n";
}

// check
bool compare() {
  for (int i = 0; i < N; ++i) {
    if (c1[i].mark != c2[i].mark) { return false; }
  }
  return true;
}