#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define rrep(i,m,n) for(ll i=(m);i<(n);i++)
#define fore(i,a) for(auto &i:a)
#define debug(a,b) cout << "debug : " << a << " , "<< b << endl
using ll=long long;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
const ll INF=1LL<<60;
const ll mod=1E9+7;

int main(){
  int n,m;
  cin >> n >> m;
  int aa,b;
  vector<vll> a(n+1,vll());
  rep(i,m){
    cin >> aa >> b;
    a[aa].push_back(b);
    a[b].push_back(aa);
  }
  queue<int>q;q.push(1);
  vector<int>ans(n+1,mod);
  int cnt=n;
  while(!q.empty()){
    int u=q.front();q.pop();
    rep(i,a[u].size()){
      int p=a[u][i];
      if(ans[p]==mod){
	cnt--;
	ans[p]=u;
	q.push(p);
      }
    }
  }

  if(cnt!=0)cout << "No" << endl;
  else {
    cout << "Yes" << endl;
    rrep(i,2,n+1)cout << ans[i] << endl;
  }
}

