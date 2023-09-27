#include <iostream>
using namespace std;
int main(void) {
  int n, m, p;
  int x[100];
  int pool;

  while(cin >> n >> m >> p, n!=0 || m!=0 || p!=0) {
    pool = 0;
    for(int i = 1 ; i <= n ; i++) {
      cin >> x[i];
      pool += x[i];
    }
    if(x[m] == 0) cout << "0" << endl;
    else {
      int ans = pool * (100-p) / x[m];
      cout << ans << endl;
    }
  }
  return 0;
}