#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int n, m, p, w, s, x;
  
  while(cin >> n >> m >> p && (n|m|p)) {
    s = 0;
    for(int i=0; i<n; i++) {
      cin >> x;
      s += x;
      if(i == m-1) w = x;
    }
    if(w == 0) cout << 0 << endl;
    else cout << s*100*(100-p)/100/w << endl;
  }
  
  return 0;
}