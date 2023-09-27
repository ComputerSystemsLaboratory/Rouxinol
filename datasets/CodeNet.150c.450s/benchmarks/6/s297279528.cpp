#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main(void){
  int a, b, c;
  cin >> a >> b >> c;

  if (a < b && b < c) {
    cout << "Yes" << "\n";
  } else {
    cout << "No" << "\n";
  }
}
