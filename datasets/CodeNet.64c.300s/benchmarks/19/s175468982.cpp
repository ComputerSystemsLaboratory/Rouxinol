#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[5001];

int main() {
  int num;
  while( cin >> num, num ) {
    ll maxn = -1000000000;
    for ( int i = 0; i < num; i++ ) cin >> a[i];
    for ( int i = 0; i < num; i++ ) {
      ll sum = 0;
      for ( int j = i; j < num; j++ ) {
	sum += a[j];
	maxn = max(maxn,sum);
      }
    }
    cout << maxn << endl;
  }
  return 0;
}