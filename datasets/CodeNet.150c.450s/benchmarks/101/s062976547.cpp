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
ll t1,t2;
const ll mod = 1000000007;
const int INF = 1e9;
const ll INFLONG = 1e18;
void swap(ll *x,ll *y){
  ll tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
vector<ll> kinds(100000,-1);
vector<ll> vec[100000];
void dfs(ll k,ll num){
  if(kinds[k] != -1){
    return;
  }
  kinds[k] = num;
  for(auto itr:vec[k]){
    dfs(itr,num);
  }
}
int main(){
  ll n,m;
  cin >> n >> m;
  rep(i,m){
    cin >> t1 >> t2;
    vec[t1].push_back(t2);
    vec[t2].push_back(t1);
  }
  rep(i,n){
    dfs(i,i);
  }
  ll q;
  cin >> q;
  rep(i,q){
    cin >> t1 >> t2;
    if(kinds[t1] == kinds[t2]){
      cout << "yes" << endl;
    }else{
      cout << "no" << endl;
    }
  }
  return 0;
}

