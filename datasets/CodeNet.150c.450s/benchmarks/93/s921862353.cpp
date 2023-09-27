#include<iostream>
#include<utility>
using namespace std;

struct Card {
  int rank;
  char suit;
};

const int N = 100000;
const int INFTY = 1000000001;

int partition(int l, int r, Card A[]) {
  int i, j, x;

  x = A[r].rank;
  i = l - 1;

  for (j = l; j < r; j++) {
    if (A[j].rank <= x) {
      i++;
      swap(A[j], A[i]);
    }
  }
  swap(A[i+1], A[r]);

  return i + 1;
}

void quick_sort(int l, int r, Card A[]) {
  if (l < r) {
    int q = partition(l, r, A);
    quick_sort(l, q-1, A);
    quick_sort(q+1, r, A);
  }
}

void merge(int l, int m, int r, Card A[]) {
  int i, j, k;
  int n1 = m - l;
  int n2 = r - m;
  Card L[n1+1], R[n2+1];

  for (i = 0; i < n1; i++) L[i] = A[i+l];
  L[n1].rank = INFTY;
  for (i = 0; i < n2; i++) R[i] = A[i+m];
  R[n2].rank = INFTY;

  j = 0;
  k = 0;  
  for (i = l; i < r; i++) {
    if (L[j].rank <= R[k].rank) A[i] = L[j++];
    else A[i] = R[k++];
  }
}

void merge_sort(int l, int r, Card A[]) {
  if (l + 1 < r) {
    int m = (l + r) / 2;
    merge_sort(l, m, A);
    merge_sort(m, r, A);
    merge(l, m, r, A);
  }
}

bool is_stable(int n, Card A[], Card B[]) {
  for (int i = 0; i < n; i++) {
    if (A[i].suit != B[i].suit) return false;
  }
  return true;
}

int main() {
  int i, n;
  Card A[N], B[N];

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> A[i].suit >> A[i].rank;
    B[i] = A[i];
  }

  quick_sort(0, n-1, A);
  merge_sort(0, n, B);

  if (is_stable(n, A, B)) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for (i = 0; i < n; i++) cout << A[i].suit << " " << A[i].rank << endl;

  return 0;
}
