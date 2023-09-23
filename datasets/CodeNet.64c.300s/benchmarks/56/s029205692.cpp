#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  while(n--) {
    int Y, M, D, res = 0;
    cin >> Y >> M >> D;
    while(Y != 1000 || M != 1 || D != 1) {
      ++res;
      int L = 20 - (M % 2 == 0 && Y % 3 != 0);
      if(D == L) {
        if(M == 10) {
          ++Y; M = D = 1;
        } else {
          ++M; D = 1;
        }
      } else {
        ++D;
      }
    }
    cout << res << endl;
  }
  return 0;
}