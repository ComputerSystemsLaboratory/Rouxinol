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
ll n,k;
vector<ll> vec(100000);

ll merge(ll st,ll en){

  if(en - st == 1){
    return 0;
  }
  ll mid = (st + en) / 2;
  ll t1 = merge(st,mid);
  ll t2 = merge(mid,en);
  ll piv = st;
  ll sum = 0;
  ull len1 = mid- st;
  ull len2 = en - mid;
  vector<ll> vec1(len1),vec2(len2);
  rep(i,len1){
    vec1[i] = vec[i+st];
  }
  rep(i,len2){
    vec2[i] = vec[i+mid];
  }
  ll x = 0;
  ll y = 0;

  while(x != len1 && y != len2){
    if(vec1[x] < vec2[y]){
      vec[piv] = vec1[x];
      x++;
    }else{
      vec[piv] = vec2[y];
      sum += len1  - x;
      y++;
    }
    piv++;
  }
  while(x != len1){
    vec[piv] = vec1[x];
    x++;
    piv++;
  }
  while(y != len2){
    vec[piv] = vec2[y];
    sum += len1 - x;
    y++;
    piv++;
  }
//  rep(i,n){
//    cout << vec[i] << " ";
//  }
//  cout << endl;

  return t1 + t2 + sum;
}

int main(){
  cin >> n;
  vec.resize(n);
  rep(i,n){
    cin >> vec[i];
  }
  cout << merge(0,n) << endl;
}
