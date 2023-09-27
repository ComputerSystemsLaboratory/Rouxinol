#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
//#define ll long long
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
#define rep(i, n) REP(i, 0, n)
#define rep_rev(i, n) for (int (i) = (int)(n) - 1 ; (i) >= 0 ; --(i))
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
#define all(x) (x).begin(),(x).end()
ll t1,t2,t3;
const ll mod = 1000000007;
const int INF = 1e9;
const ll INFLONG = 1e18;

int main(){
  ll n;
  cin >> n;
  vector<ll> ans(n,INFLONG);
  vector<pair<ll,ll>> vec[n];
  ll u;
  ll k;
  rep(_,n){
    cin >> u >> k;
    rep(i,k){
      cin >> t1 >> t2;
      vec[u].emplace_back(make_pair(t2,t1)); //cost , node_num
    }
  }
  priority_queue<pair<ll,ll>> pq;
  ans[0] = 0;
  for(auto itr:vec[0]){
    pq.push(make_pair(-itr.first,itr.second)); //-cost
  }
  pair<ll,ll> pa;
  while(!pq.empty()){
    pa = pq.top();
    pq.pop();
    t1 = -pa.first; //cost
    t2 = pa.second;
    //cout << t1 << " " << t2 << endl;
    if(t1 < ans[t2]){
      ans[t2] = t1;
      for(auto itr:vec[t2]){
        pq.push(make_pair(-t1 - itr.first,itr.second));
      }
    }
  }
  rep(i,n){
    cout << i << " " << ans[i] << endl;
  }
}
