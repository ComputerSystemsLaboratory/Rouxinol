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
ll tmp1,tmp2,tmp3;
const ll mod = 1000000007;
const int INF = 1e9;
const ll INFLONG = 1e18;
void swap(ll *x,ll *y){
  ll tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
ll h;
ll left(ll k){
  k = k * 2 + 1;
  return k;
}
ll right(ll k){
  k = k * 2 + 2;
  return k;
}
void maxheapify(vector<ll> &vec,ll k){
  ll largest;
  ll l = left(k);
  ll r = right(k);
  //cout << l << " " << h-1 << " " << k << endl;
  //左の子、自分、右の子で値が最大のノードを選ぶ
  if(l <= h-1 && vec[l] > vec[k]){
    largest = l;
  }else{
    largest = k;
  }
  if(r <= h-1 && vec[r] > vec[largest]){
    largest = r;
  }

  if(largest != k){
    swap(vec[k],vec[largest]);
    maxheapify(vec,largest);
  }
}
int main(){
  cin >> h;
  vector<ll> vec(h);
  rep(i,h){
    cin >> vec[i];
  }
  rep_rev(i,h){
    maxheapify(vec,i);
  }
  rep(i,h){
    cout << " " << vec[i];
  }
  cout << endl;
}
