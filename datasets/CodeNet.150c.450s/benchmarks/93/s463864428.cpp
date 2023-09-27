#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using ll = long long;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<ll> VLL;
typedef vector<string> VS;

struct N {
  string suit;
  long value;
};
int n; vector<N> A(100000), B(100000);

int partition(int p, int r) {
  int x = A.at(r-1).value;
  int nn = r-p;
  int c = 0;
  rep(i, nn-1){
    if (A.at(p+i).value <= x) {
      swap(A.at(p+i), A.at(p+c));
      c++;
    }
  }
  swap(A.at(r-1), A.at(p+c));
  return p+c;
}

void quickSort(int p, int r) {
  if (p < r) {
    int q = partition(p, r);
    quickSort(p, q);
    quickSort(q+1, r);
  }
}

void merge(int l, int m, int r) {
  int n1 = m-l;
  int n2 = r-m;
  long INF= long(1e+9)+1;
  vector<N> L(n1+1);
  vector<N> R(n2+1);
  rep(i, n1) {
    L.at(i) = B.at(l+i);
  }
  rep(i, n2) {
    R.at(i) = B.at(m+i);
  }
  L.at(n1).value = INF;
  R.at(n2).value = INF;
  int lh, rh;
  lh = rh = 0;
  rep(i, n1+n2) {
    if (L.at(lh).value <= R.at(rh).value) {
      B.at(l+i) = L.at(lh);
      lh++;
    } else {
      B.at(l+i) = R.at(rh);
      rh++;
    }
  }
}

void mergeSort(int l, int r) {
  if (l+1 < r) {
    int mid = (l+r)/2;
    mergeSort(l, mid);
    mergeSort(mid, r);
    merge(l, mid, r);
  }
}

string checkStable() {
  rep(i, n) {
    if (A.at(i).suit != B.at(i).suit) {
      return "Not stable";
    }
  }
  return "Stable";
}

int main() {
  cin >> n;
  rep(i, n){
    cin >> A.at(i).suit;
    B.at(i).suit = A.at(i).suit;
    cin >> A.at(i).value;
    B.at(i).value = A.at(i).value;
  }
  quickSort(0, n);
  mergeSort(0, n);
  cout << checkStable() << endl;
  rep(i, n) {
    cout << A.at(i).suit << " " << A.at(i).value << endl;
  }
}

