#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> cnt(10001, 0);
  for ( int i = 0; i < n; i++ ) cin >> a[i], cnt[a[i]]++;

  bool flag = false;
  for ( int i = 0; i < 10001; i++ ) {
    for ( int j = 0; j < cnt[i]; j++ ) {
      if ( flag ) cout << " ";
      else flag = true;
      cout << i;
    }
  }
  cout << endl;
  
  return 0;
}

