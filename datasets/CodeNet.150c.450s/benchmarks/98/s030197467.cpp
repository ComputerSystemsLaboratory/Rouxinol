#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, m, t, d, st, sh;
  while (cin >> n >> m, n||m){
    st = 0;
    sh = 0;
    vector<int> ta, ha;
    for (int i = 0; i < n; ++i){
      cin >> t;
      ta.push_back(t);
      st += t;
    }
    for (int i = 0; i < m; ++i){
      cin >> t;
      ha.push_back(t);
      sh += t;
    }
    sort(ta.begin(), ta.end());
    sort(ha.begin(), ha.end());
    if ((st - sh) % 2) cout << -1 << endl;
    else{
      d = (sh - st) / 2;
      int i = 0;
      int j = 0;
      t = 1;
      while ((i < n) && (j < m) && t){
	if (ta[i] + d < ha[j]) ++i;
	else if (ta[i] + d == ha[j]){
	  cout << ta[i] << " " << ha[j] << endl;
	  t = 0;
	}else ++j;
      }
      if (t) cout << -1 << endl;
    }
  }
}