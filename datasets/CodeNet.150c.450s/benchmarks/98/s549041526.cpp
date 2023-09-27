#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> t(100);
vector<int> h(100);  
int main() {
  while(cin >> n >> m && n * m != 0)
    {
      for(int i = 0; i < n; i++) {
	cin >> t[i];
      }
      for(int i = 0; i < m; i++) {
	cin >> h[i];
      }
      int q = INT_MAX / 2 - 1;
      int p = INT_MAX / 2 - 1;
      for(int i = 0; i < n; i++) {
	for(int j = 0; j < m; j++) {
	  swap(t[i], h[j]);
	  if(accumulate(t.begin(), t.begin() + n, 0)
	     == accumulate(h.begin(), h.begin() + m, 0)) {
	    if(p + q > i + j) {
	      p = i; q = j;
	    }
	  }
	  swap(t[i], h[j]);
	}
      }
      if(p == INT_MAX / 2 - 1) {
	cout << -1 << endl;
      }else {
	cout << t[p] << " " << h[q] << endl;
      }
    }
}