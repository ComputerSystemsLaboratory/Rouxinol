#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

int partition(vector<P> &a, int p, int r) {
  P x = a[r];
  int i = p-1;
  for ( int j = p; j < r; j++ ) {
    if ( a[j].first <= x.first ) {
      i++;
      swap(a[i], a[j]);
    }    
  }

  swap(a[i+1], a[r]);
  return i+1;
}

void quickSort(vector<P> &a, int p, int r) {
  if ( p < r ) {
    int q = partition(a, p, r);
    quickSort(a, p, q-1);
    quickSort(a, q+1, r);
  }
}

int main() {
  int n;
  cin >> n;

  vector<P> a(n);
  vector<char> pat(n);
  vector<int> num(n);
  for ( int i = 0; i < n; i++ ) {
    cin >> pat[i] >> num[i];
    a[i] = P(num[i], i);
  }

  vector<P> b = a;

  quickSort(b, 0, n-1);

  sort(a.begin(), a.end());

  if ( a != b ) cout << "Not stable" << endl;
  else cout << "Stable" << endl;

  for ( int i = 0; i < n; i++ ) {
    int id = b[i].second;
    cout << pat[id] << " " << num[id] << endl;
  }

  return 0;
}

