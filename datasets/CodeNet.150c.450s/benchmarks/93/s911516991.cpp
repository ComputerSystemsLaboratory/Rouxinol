#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

struct Card {
  char suit;
  int value;
};
Card a[100003];

int mypartition(int p, int r) {
  int x = a[r].value;
  int i = p-1;
  for (int j=p; j<r; ++j) {
    if (a[j].value <= x) {
      i++;
      Card tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }
  Card tmp = a[i+1];
  a[i+1] = a[r];
  a[r] = tmp;
  return i+1;
}

void quicksort(int p, int r) {
  if (p < r) {
    int q = mypartition(p, r);
    quicksort(p, q-1);
    quicksort(q+1, r);
  }
}

void printAns(Card a[], Card b[], int n) {
  rep(i,n-1) {
    if (a[i].value == a[i+1].value) {
      int left, right;
      rep(j,n-1) {
	if (b[j].suit == a[i].suit && b[j].value == a[i].value) left = j;
	if (b[j].suit == a[i+1].suit && b[j].value == a[i+1].value) right = j;
      }
      if (left > right) {
	cout << "Not stable" << endl;
	rep(i,n) cout << a[i].suit << ' ' << a[i].value << endl;
	return;
      }
    }
  }
  cout << "Stable" << endl;
  rep(i,n) cout << a[i].suit << ' ' << a[i].value << endl;
}

int main() {
  int n;
  cin >> n;
  rep(i,n) cin >> a[i].suit >> a[i].value;

  Card b[n];
  rep(i,n) {
    b[i].suit = a[i].suit;
    b[i].value = a[i].value;
  }
  
  quicksort(0, n-1);

  printAns(a, b, n);
  return 0;
}

