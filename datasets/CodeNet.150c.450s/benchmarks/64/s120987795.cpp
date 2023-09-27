#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, q;
int a[2000];
int m[2000];

bool solve(int i, int j) {
  bool r;
  if(i == n) r = false;
  else if(a[i] == j) r = true;
  else if(a[i] > j) r = solve(i+1, j);
  else r = solve(i+1, j) || solve(i+1, j - a[i]);
  return r;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> m[i];
    if(solve(0, m[i])) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}