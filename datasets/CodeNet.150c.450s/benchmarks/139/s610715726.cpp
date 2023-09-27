#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double lld;
ll MOD = 998244353;
ll inf=1e17;
const int dr[] = {+1, -1, +0, +0, +1, -1, +1, -1};
const int dc[] = {+0, +0, +1, -1, +1, -1, -1, +1};
const int kx[] = {+1, +2, -1, -2, +1, +2, -1, -2};
const int ky[] = {+2, +1, +2, +1, -2, -1, -2, -1};
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
inline void fastIO(){
  ios_base::sync_with_stdio(0);cin.tie(0);
}
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T, size_t size> ostream& operator<<(ostream &os, const array<T, size> &arr) { os << '{'; string sep; for (const auto &x : arr) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void debug_out() { cerr << endl; }
template<typename Head, typename... Tail> void debug_out(Head H, Tail... T) { cerr << ' ' << H; debug_out(T...); }

#ifdef LOCAL
#define debug(...) cerr << "(" << #__VA_ARGS__ << "):", debug_out(__VA_ARGS__)
#else
#define debug(...) 47
#endif

int main(){
  fastIO();
  ll n,m,ans=0;
  cin>>n>>m;
  vector<vector<ll>>adj(n+10);
  vector<bool>vis(n+10,false);
  vector<ll>dist(n+10,inf);
  queue<pair<int,int>>cave;
  vector<ll>signs(n+10);
  //node - parent
  for(int i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  dist[1]=0;
  cave.push(make_pair(1,1));
  while(!cave.empty()){
    pair<int,int>next=cave.front();
    ll node=next.first,parent=next.second;
    signs[node]=parent,vis[node]=true;
    cave.pop(),ans++;
    for(auto nextNode:adj[node]){
      if(!vis[nextNode]){
        if(dist[nextNode]>dist[node]+1){
          cave.push(make_pair(nextNode,node));
          dist[nextNode]=dist[node]+1;
        }
      }
    }
  }
  if(ans==n){
    cout<<"Yes"<<endl;
    for(int i=2;i<=n;i++){
      cout<<signs[i]<<endl;
    }
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}
