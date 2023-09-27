#include <iostream>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

struct Card {
  char suit;
  int num;
};

void swapCard(Card *x, Card *y) {
  Card temp{x->suit, x->num};
  x->suit = y->suit;
  x->num = y->num;
  y->suit = temp.suit;
  y->num = temp.num;
}

int partition(Card *A, int p, int r) {
  int x = A[r].num;

  int i = p;
  for (int j = p; j < r; ++j) {
    if (A[j].num <= x) {
      swapCard(&A[i], &A[j]);
      i++;
    }
  }

  swapCard(&A[i], &A[r]);

  return i;
}

void quickSort(Card *A, int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

void merge(Card *A, int n, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  Card L[n1 + 1], R[n2 + 1];

  for (int i = left; i < mid; ++i) {
    L[i - left].suit = A[i].suit;
    L[i - left].num = A[i].num;
  }

  for (int i = mid; i < right; ++i) {
    R[i - mid].suit = A[i].suit;
    R[i - mid].num = A[i].num;
  }

  L[n1].num = R[n2].num = (1 << 30);

  int l = 0, r = 0;
  for (int i = left; i < right; ++i) {
    if (L[l].num <= R[r].num) {
      A[i] = L[l];
      l++;
    } else {
      A[i] = R[r];
      r++;
    }
  }
}

void mergeSort(Card *A, int n, int left, int right) {
  if (right - left <= 1)
    return;

  int mid = (left + right) / 2;
  mergeSort(A, n, left, mid);
  mergeSort(A, n, mid, right);
  merge(A, n, left, mid, right);
}

int main() {
  int n;
  std::cin >> n;
  Card A[n], B[n];
  rep(i, n) std::cin >> A[i].suit >> A[i].num;

  rep(i, n) {
    B[i].suit = A[i].suit;
    B[i].num = A[i].num;
  }

  quickSort(A, 0, n - 1);
  mergeSort(B, n, 0, n);

  bool isStable = true;
  rep(i, n) {
    if (A[i].suit != B[i].suit) {
      isStable = false;
      break;
    }
  }
  std::cout << (isStable ? "Stable" : "Not stable") << '\n';

  rep(i, n) { std::cout << A[i].suit << ' ' << A[i].num << '\n'; }

  return 0;
}

