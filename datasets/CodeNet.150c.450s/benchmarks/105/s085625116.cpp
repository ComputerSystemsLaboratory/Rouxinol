#include <bits/stdc++.h>
#define int long long
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define F first
#define S second

using namespace std;
typedef pair<int,int> P;
typedef vector<int> ivec;

const int MOD=1000000007;
int INF=100100100100100;

void solve(){
  int n;cin>>n;
  ivec a(n);rep(i,n)cin>>a[i];
  string s;cin>>s;
  
  ivec basis;
  for(int i=n-1;i>=0;i--){
    for(int x:basis)a[i]=min(a[i],a[i]^x);
    if(a[i]){
      if(s[i]=='1'){
        cout<<1<<endl;
        return;
      }
      basis.pb(a[i]);
    }
  }
  cout<<0<<endl;
}
  
signed main(){
  int t;cin>>t;
  rep(i,t)solve();
  return 0;
}