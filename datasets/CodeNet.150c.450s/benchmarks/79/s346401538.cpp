#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, n) for(int i = (a); i < (n); i++)
#define REP(i, n) for(int i = 0; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define debug(x) cerr << #x << ": " << x << '\n'

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true) {
    int n, r;
    int p, c;
    int temp;
    cin >> n >> r;
    if(n + r == 0) break;

    int a[100];
    REP(i, n) {
      a[i] = i + 1;
    }

    REP(i, r) {
      cin >> p >> c;
      REP(k, c) {
        FOR(j, n - p, n - 1) {
            temp = a[j - k];
            a[j - k] = a[j + 1 - k];
            a[j + 1 - k] = temp;
        }
      }
    }
    cout << a[n - 1] << endl;

  }






}

