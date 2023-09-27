#include <bits/stdc++.h>
using namespace std;

vector<pair<int, char>> A;

int partition (int p, int r) {
  int x = A[r].first;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j].first <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i + 1;
}

void quicksort(int p, int r) {
  if (p < r) {
    int q = partition(p, r);
    quicksort(p, q - 1);
    quicksort(q + 1, r);
  }
}

int main() {

  int n;
  cin >> n;

  A.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i].second >> A[i].first;
  }

  map<int, string> m1;
  map<int, string> m2;

  for (int i = 0; i < n; i++) {
    m1[A[i].first] += A[i].second;
  }

  quicksort(0, n - 1);

  for (int i = 0; i < n; i++) {
    m2[A[i].first] += A[i].second;
  }

  bool flg = true;

  for (int i = 0; i < n; i++) {
    if (m1[A[i].first] != m2[A[i].first]) {
      flg = false;
      break;
    }
  }

  if (flg) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  for (int i = 0; i < n; i++) {
    cout << A[i].second << " " << A[i].first << endl;
  }

  return 0;

}
