#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, from, to) for (int i = from; i < (to); ++i)
#define mp(x,y) make_pair(x,y)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define pb push_back
using ll = long long;
using vin=vector<int>;
using vll=vector<ll>;
using P = pair<int, int>;
const int inf=1e9+7;
const ll INF=1e18;
template <typename T> void chmin(T &a, T b) { a = min(a, b); }
template <typename T> void chmax(T &a, T b) { a = max(a, b); }

int main() {
  int n,k;
  cin>>n>>k;
  vin a(n);
  rep(i,0,n)cin>>a[i];
  
  rep(i,k,n){
    bool ans=true;
    if(a[i]<=a[i-k])ans=false;
    
    
    if(ans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  
  
}