#include <bits/stdc++.h>
#define ALL(x) (x).begin(),(x).end()
#define PB push_back
#define MP make_pair
#define Mod 998244353
#define MOD 1000000007
using namespace std;
using lint = long long;
using vi = vector<lint>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;

// cout << fixed << setprecision(12)

int main(){
  lint D; cin >> D;
  vi c(26); // contest 0-25
  for(lint i=0; i<26; i++) cin >> c[i];
  vvi s(D+1, vi(26)); // day 0-D
  for(lint d=1; d<=D; d++){
    for(lint j=0; j<26; j++){
      cin >> s[d][j];
    }
  }
  vi t(D+1); // day 0-D
  for(lint d=1; d<=D; d++){
    cin >> t[d];
    t[d]--;
  }
  
  vi last(26,0);
  
  lint ans = 0;
  
  for(lint d=1; d<=D; d++){
    ans += s[d][t[d]];
    last[t[d]] = d;
    for(lint j=0; j<26; j++){
      ans -= c[j] * (d - last[j]);
    }
    cout << ans << endl;
  }
}
      
      
    
  
  
  
  