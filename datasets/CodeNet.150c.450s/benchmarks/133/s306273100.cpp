#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_range(i, s, e) for (int i = (s); i < (int)(e); i++)
#define rep_rev(i, s, e) for (int i = (s)-1; i >= (int)(e); i--)
#define sort_vec(v) sort((v).begin(),(v).end())
typedef int64_t lint;
// lint mod = 998244353;
// lint mod = 1000000007;
template< typename T1, typename T2 >
inline bool chmax(T1 &a, T2 b) { return a < b && (a = b, true); }
template< typename T1, typename T2 >
inline bool chmin(T1 &a, T2 b) { return a > b && (a = b, true); }

void app() {
  int d;
  cin>>d;

  int n=26;
  vector<int> c(n);
  rep(j,n){
    cin>>c[j];
  }
  vector<vector<int>> s(d,vector<int>(n));
  rep(i,d) rep(j,n) cin>>s[i][j];

  vector<int> t(d);
  rep(i,d){
    cin>>t[i];
    t[i]--;
  }

  lint score=0;
  vector<int> lastd(n,-1);
  rep(i,d){
    int j=t[i];
    lastd[j]=i;
    score+=s[i][j];
    rep(j,n) score-=c[j]*(i-lastd[j]);
    cout<<score<<endl;
  }

}

int main(){app();return 0;}
