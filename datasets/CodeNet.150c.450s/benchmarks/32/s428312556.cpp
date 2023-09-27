#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int table[205];

  int m, min, max, ans_n;

  while(1){
    cin >> m >> min >> max; if(m == 0) break;

    for(int i = 0; i < m; i++) cin >> table[i];

    int ans = 0;
    for(int n = min - 1; n < max; n++){
      if(ans <= table[n] - table[n + 1]){
	ans = table[n] - table[n + 1];
	ans_n = n;
      }
    }

    cout << ans_n + 1 << endl;

  }

  return 0;
}