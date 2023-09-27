#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for(ll i=0; i<n; i++)
#define Rep(i, j, n) for(int i=j; i<n; i++)
#define all(vec) vec.begin(), vec.end()
typedef long long ll;ll MM = 1000000000;ll mod = MM + 7;

int main() {
  while(1) {
    int n; cin >> n;
    if(n == 0) return 0;
    vector<string> v(n);
    rep(i, n) cin >> v[i];
    int count = 0;
    bool flag = true;
    rep(i, n-1) {
      if(flag) {
      if(v[i] == "lu" && v[i+1] == "ru") {
        count++;
        flag = false;
      }
      if(v[i] == "ru" && v[i+1] == "lu") {
        count++;
        flag = false;
      }
      }
      else {
        if(v[i] == "ld" && v[i+1] == "rd") {
          count++;
          flag = true;
        }
        if(v[i] == "rd" && v[i+1] == "ld") {
          count++;
          flag = true;
        }
      }
    }
    cout << count << endl;
  }
}

