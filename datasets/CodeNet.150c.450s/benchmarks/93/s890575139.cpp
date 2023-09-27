/*
 * c.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

const int MAX_N = 100000;

/* typedef */

typedef vector<int> vi;
typedef queue<int> qi;
typedef pair<int,int> pii;

struct Card {
  int v, i;
  char s;
  Card() {}
  Card(char _s, int _v, int _i): s(_s), v(_v), i(_i) {}
  bool operator<(const Card &c) const { return v < c.v; }
  bool operator<=(const Card &c) const { return v <= c.v; }
  void print() { printf("%c %d\n", s, v); }
};

/* global variables */

Card as[MAX_N];

/* subroutines */

int partition(Card A[], int p, int r) {
  Card x = A[r];
  int i = p - 1;
  for (int j = p; j < r; j++)
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  i++;
  swap(A[i], A[r]);
  return i;
}

void quicksort(Card A[], int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quicksort(A, p, q - 1);
    quicksort(A, q + 1, r);
  }
}

bool stable(int n, Card as[]) {
  for (int i = 0; i < n; i++) {
    Card &ai = as[i];
    for (int j = i + 1; j < n && ai.v == as[j].v; j++)
      if (ai.i > as[j].i) return false;
  }
  return true;
}

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> as[i].s >> as[i].v;
    as[i].i = i;
  }

  quicksort(as, 0, n - 1);

  cout << (stable(n, as) ? "Stable" : "Not stable") << endl;
  for (int i = 0; i < n; i++) as[i].print();
  return 0;
}