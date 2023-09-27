#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(i64 (i) = (s);(i) < (e);(i)++)
#define all(x) x.begin(),x.end()
#define let auto const

int main() {
  i64 N;
  cin >> N;
  set<string> st;
  rep(i,0,N) {
    string u;
    cin >> u;
    st.insert(u);
  }
  i64 M;
  cin >> M;
  vector<string> T(M);
  rep(i,0,M) cin >> T[i];
  i64 op = 0;
  rep(i,0,M) {
    string t = T[i];
    if(st.count(t)) {
      op ^= 1;
      if(op) {
        cout << "Opened by " << t << endl;
      }
      else {
        cout << "Closed by " << t << endl;
      }
    }
    else {
      cout << "Unknown " << t << endl;
    }
  }
}

