#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
using ll=long long;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define MOD  1000000007
const ll INF=1e18;
template<class T>void show(vector<T>v){for (int i = 0; i < v.size(); i++){cerr<<v[i]<<" ";}cerr<<endl;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b){ a = b; return 1; } return 0; }

vector<int> G[100010];

int main(int argc, char const *argv[]) {
  int n,m;
  cin >> n >> m;
  rep(i, m) { int a, b;
  cin >> a >> b;
  a--, b--;
  G[b].pb(a), G[a].pb(b);
  }
  vector<int> dist(n, -1);
  queue<int> q;
  q.push(0);
  dist[0] = 0;

  while(!q.empty()){
    int now = q.front();
    q.pop();
    for(auto p: G[now]){
      if (dist[p] != -1) continue;
      dist[p] = dist[now] + 1;
      q.push(p);
    }
  }
  puts("Yes");
  for(int i=1; i<n; i++){
    int rec = dist[i];
    for(auto p: G[i]){
      if(rec==dist[p]+1) {
        cout << p+1 << endl;
        break;
      }
    }
  }
  
  //show(dist);
  return 0;
}