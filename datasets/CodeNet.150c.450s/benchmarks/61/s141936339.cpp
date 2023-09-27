#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, n) for(int i = (a); i < (n); i++)
#define REP(i, n) for(int i = 0; i < (n); i++)
#define print(a) cout << a << "\n"
#define ALL(obj) (obj).begin(), (obj).end()
#define debug(x) cerr << #x << ": " << x << '\n'

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, A, B, C, X;
  int r[10001];
  int y[10001];


  while(true) {
    cin >> N >> A >> B >> C >> X;
    if(N + A + B + C + X == 0){
      break;
    }
    r[0] = X;
    REP(i, 10000) {
      r[i + 1] = (A * r[i] + B) % C;
    }

    REP(i, N) {
      cin >> y[i];
    }

    int n = 0;
    REP(i, N) {
      if(n == -1) {
        break;
      }
      while (true) {
        // if(y[i + 1] == y[i]) {
        //   n++;
        // }
        if(y[i] == r[n]) {
          n++;
          break;
        }

        if(n > 10000) {
          n = -1;
          break;
        }
        n++;
      }
    }
    if(n == -1){
      cout << n << endl;
    } else {
      cout << --n << endl;
    }

  }
  return 0;
}

