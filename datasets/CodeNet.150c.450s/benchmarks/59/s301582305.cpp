#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
int a[1000], N;

void print() {
  for (int i = 0; i < N-1; i++) {
    cout << a[i] << " ";
  }
  cout << a[N-1] << endl;
}

signed main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> a[i];
  for (int i = 0; i < N; i++) {
    int v = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > v) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;
    print();
  }
}

