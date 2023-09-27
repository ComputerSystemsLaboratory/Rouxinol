#include <cstdio>
#include <iostream>
#include <stdlib.h>

using namespace std;

namespace {

struct Node {
  char suit; // S, H, C, D
  int value;
};

// SelectionSort sorts the array |a| in ascending order, and then returns
// the number of swap operations.
int SelectionSort(Node* a, int n) {
  int nswap = 0;

  for (int i = 0; i < n; ++i) {
    int minj = i;
    for (int j = i + 1; j < n; ++j) {
      if (a[j].value < a[minj].value) {
        minj = j;
      }
    }
    if (i != minj) {
      ++nswap;
      const Node t = a[i];
      a[i] = a[minj];
      a[minj] = t;
    }
  }

  return nswap;
}

// BubbleSort sorts the array |a| in ascending order, and then returns
// the number of swap operations.
int BubbleSort(Node* a, int n) {
  int nswap = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j >= 1; --j) {
      if (a[j].value < a[j - 1].value) {
        const Node t = a[j - 1];
        a[j - 1] = a[j];
        a[j] = t;
        ++nswap;
      }
    }
  }
  return nswap;
}

void Print(const Node* a, int n) {
  for (int i = 0; i < n; ++i) {
    if (i > 0) printf(" ");
    printf("%c%d", a[i].suit, a[i].value);
  }
  printf("\n");
}

bool IsStable(const Node* a, const Node* b, int n) {
  for (int i = 0; i < n; ++i) {
    if (a[i].value == b[i].value && a[i].suit != b[i].suit) {
      return false;
    }
  }
  return true;
}

} // namespace

int main() {
  int n;
  cin >> n;
  Node in[36];
  Node a[36];
  Node b[36];

  char buf[4];
  for (int i = 0; i < n; ++i) {
    cin >> buf;
    in[i].suit = buf[0];
    in[i].value = atoi(&buf[1]);
    a[i] = in[i];
    b[i] = in[i];
  }

  BubbleSort(a, n);
  Print(a, n);
  printf("Stable\n");

  SelectionSort(b, n);
  Print(b, n);
  if (IsStable(a, b, n)) {
    printf("Stable\n");
  } else {
    printf("Not stable\n");
  }
  return 0;
}