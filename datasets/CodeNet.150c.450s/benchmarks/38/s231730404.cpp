#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  vector<int> a(N), b(N), c(N);
  int i = 0;
  for(; i < N; i++) cin >> a[i] >> b[i] >> c[i];
  for(i = 0; i < N; i++) {
    if(a[i] * a[i] == b[i] * b[i] + c[i] * c[i] || b[i] * b[i] == c[i] * c[i] + a[i] * a[i] || c[i] * c[i] == a[i] * a[i] + b[i] * b[i]) cout << "YES";
    else cout << "NO";
    cout << endl;
  }
}
