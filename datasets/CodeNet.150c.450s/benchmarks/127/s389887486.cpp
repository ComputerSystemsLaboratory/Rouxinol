#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int m, l, ans;
  string s, t, u;
  vector<string> V;
  vector< vector<string> > H(2);
  cin >> m;
  for (int i = 0; i < m; ++i){
    cin >> s;
    V.push_back(s);
    l = s.length();
    ans = 1;
    for (int j = 1; j < l; ++j) {
      t = "";
      u = "";
      for (int k = 0; k < j; ++k){
	t += s[k];
	u += s[j-1-k];
      }
      H[0].push_back(t);
      H[0].push_back(u);
      t = "";
      u = "";
      for (int k = 0; k+j < l; ++k) {
	t += s[j+k];
	u += s[l-1-k];
      }
      H[1].push_back(t);
      H[1].push_back(u);
      for (int a = 0; a < 2; ++a) {
	for (int b = 0; b < 2; ++b) {
	  for (int c = 0; c < 2; ++c) {
	    V.push_back(H[a][b]+H[(a+1)%2][c]);
	  }
	}
      }
      H[0].erase(H[0].begin(), H[0].end());
      H[1].erase(H[1].begin(), H[1].end());
    }
    ans = 1;
    sort(V.begin(), V.end());
    for (int j = 1; j < V.size(); ++j) {
      if (V[j] != V[j-1]) ++ans;
    }
    cout << ans << endl;
    V.erase(V.begin(), V.end());
  }
  return 0;
}