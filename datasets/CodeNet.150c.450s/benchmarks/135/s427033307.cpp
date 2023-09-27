#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<ctime>

using namespace std;
using ll = long long;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int ti = clock();
  // start-----------------------------------------------
  int n, m;
  while(cin >> n >> m && n && m){
    vector<int> unit_h(n), unit_w(m);
    for(int &i: unit_h) cin >> i;
    for(int &i: unit_w) cin >> i;
    vector<int> h, w;
    for(int i = 0; i < n; i++){
      int tmp = 0;
      for(int j = i; j < n; j++){
        tmp += unit_h[j];
        h.push_back(tmp);
      }
    }
    for(int i = 0; i < m; i++){
      int tmp = 0;
      for(int j = i; j < m; j++){
        tmp += unit_w[j];
        w.push_back(tmp);
      }
    }
    sort(h.begin(), h.end());
    sort(w.begin(), w.end());
    int ans = 0;
    for(int i = 0; i < h.size(); i++){
      auto it = lower_bound(w.begin(), w.end(), h[i]);
      while(it != w.end() && *it == h[i]){
        ans++;
        it++;
      }
    }
    cout << ans << endl;
  }

  // end-----------------------------------------------
  // cerr << 1.0 * (clock() - ti) / CLOCKS_PER_SEC << endl;
}

