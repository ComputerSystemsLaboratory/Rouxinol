#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n, q;
  ll sum = 0;
  map<int, int> a;
  cin >> n;
  for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    sum += x;
    a[x]++;
  }
  cin >> q;
  for (int i = 0; i < q; i++){
    int b, c;
    cin >> b >> c;
    if (a.count(b)) {
      int diff = c-b;
      ll add = a[b]*diff;
      sum += add;
      a[c] += a[b];
      a.erase(b);
    } 
    cout << sum << endl;
  } 
}