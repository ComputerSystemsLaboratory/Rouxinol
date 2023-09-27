#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

#define MAX_N 100000

struct Card {
  char suit;
  int value;
};

Card A[MAX_N + 5];

int partition(int p, int r) {
  int x = A[r].value;
  int i = p - 1;
  Card tmp;
  for (int j = p; j < r; j++) {
    if (A[j].value <= x) {
      i++;
      tmp = A[j];
      A[j] = A[i];
      A[i] = tmp;
    }
  }
  tmp = A[r];
  A[r] = A[i + 1];
  A[i + 1] = tmp;
  return i + 1;
}

void quickSort(int p, int r) {
  if (p < r) {
    int q = partition(p, r);
    quickSort(p, q - 1);
    quickSort(q + 1, r);
  }
}

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    char suit;
    int value;
    cin >> suit >> value;
    Card c = {suit, value};
    A[i] = c;
  }
  map<int, vector<char>> bmp;
  rep(i, n) {
    if (bmp.count(A[i].value)) {
      bmp[A[i].value].push_back(A[i].suit);
    } else {
      vector<char> v = {A[i].suit};
      bmp[A[i].value] = v;
    }
  }
  quickSort(0, n - 1);
  map<int, vector<char>> amp;
  rep(i, n) {
    if (amp.count(A[i].value)) {
      amp[A[i].value].push_back(A[i].suit);
    } else {
      vector<char> v = {A[i].suit};
      amp[A[i].value] = v;
    }
  }

  bool stable = true;
  for (auto i = bmp.begin(); i != bmp.end(); i++) {
    int key = i->first;
    vector<char> bv = i->second;
    vector<char> av = amp[key];
    rep(i, bv.size()) {
      if (av[i] != bv[i]) {
        stable = false;
      }
    }
    if (!stable) break;
  }
  if (stable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
  rep(i, n) cout << A[i].suit << " " << A[i].value << endl;
  return 0;
}

