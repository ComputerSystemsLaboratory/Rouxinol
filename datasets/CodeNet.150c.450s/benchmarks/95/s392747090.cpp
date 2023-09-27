#include <bits/stdc++.h>
using namespace std;
using ll=long long;

#define itn long long
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define rrep(i,n) for(int i=(int)(n);i>=0;--i)
#define debug(x) cout << #x << "=" << (x) << endl;
const ll MOD=1e9+7;

template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> void fail(T v){cout << v << endl;exit(0);}
//template end

void solve(){
  while(1){
    int N;
    cin>>N;if(!N)break;
    int l=0,r=0,b=1,res=0;
    rep(i,N){
      string s;
      cin>>s;
      if(s[0]=='l')l^=1;
      else r^=1;
      if(l==b&&r==b){res++;b^=1;}
    }
    cout<<res<<endl;
  }
}
 
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  solve();
  return 0;
}
