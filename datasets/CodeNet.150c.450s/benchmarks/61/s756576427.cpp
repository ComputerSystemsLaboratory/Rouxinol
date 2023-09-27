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
    int N,A,B,C,X;
    cin>>N>>A>>B>>C>>X;
    if(!(A|B|N|C|X))return;
    vector<int> Y(N);
    rep(i,N) cin >> Y[i];
    int idx=0;
    if(X==Y[idx])idx++;
    rep(i,10001){
      if(idx==N){cout<<i<<endl;goto END;}
      X=(A*X+B)%C;
      if(X==Y[idx])idx++;
    }
    cout<<-1<<endl;
    END:;
  }
}
 
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  solve();
  return 0;
}
