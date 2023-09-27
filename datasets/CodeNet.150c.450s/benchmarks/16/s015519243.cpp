#include <bits/stdc++.h>
using namespace std;

const int INF = 1<<28;

int main() {
  string s;
  cin >> s;
  int N = s.size();

  vector<int> h(N+1, 20000);
  for(int i = 0; i < N; ++i) {
    if(s[i] == '/') h[i+1] = h[i] + 1;
    else if(s[i] == '\\') h[i+1] = h[i] - 1;
    else h[i+1] = h[i];
  }

  vector<vector<int> > f(40002);
  for(int i = 0; i < h.size(); ++i) f[h[i]].push_back(i);

  vector<int> used(N+1, 0);
  vector<int> v(N+1, 0);
  for(int y = (int)f.size()-1; y >= 0; --y) {
    for(int i = 0; i+1 < f[y].size(); ++i) {
      int x = f[y][i];
      int nx = f[y][i+1];
      if(!used[x] && s[x] == '\\') {
	int tmp = 0;
	for(int j = x, k = 0; j < nx; ++j) {
	  used[j] = true;
	  int add = k * 2;
	  if(s[j] == '\\') {
	    ++k;
	    ++add;
	  } else if(s[j] == '/') {
	    --k;
	    --add;
	  }
	  tmp += add;
	}
	tmp /= 2;
	v[x] = tmp;
      }
    }
  }

  int sum = 0;
  vector<int> ans;
  for(int i = 0; i < v.size(); ++i) {
    if(v[i]) {
      sum += v[i];
      ans.push_back(v[i]);
    }
  }
  cout << sum << endl;
  cout << ans.size();
  for(int i = 0; i < ans.size(); ++i) cout << " " << ans[i];
  cout << endl;

  return 0;
}