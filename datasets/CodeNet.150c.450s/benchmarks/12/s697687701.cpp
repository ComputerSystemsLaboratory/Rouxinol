//
// Created by 吉川純平 on 2019-12-01.
//

#include <bits/stdc++.h>
using namespace std;
//using ll = long long;
//using ull = unsigned long long;
#define ll long long
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
#define rep(i, n) REP(i, 0, n)
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
int main(){
  ll h;
  cin >> h;
  vector<ll> vec(h);
  rep(i,h){
    cin >> vec[i];
  }
  rep(i,h){
    printf("node %d:",i+1);
    printf(" key = %lld,",vec[i]);
    if(i != 0){
      printf(" parent key = %lld,",vec[(i-1)/2]);
    }
    if(i * 2 + 1 < h){
      printf(" left key = %lld,",vec[i*2+1]);
    }
    if(i * 2 + 2 < h){
      printf(" right key = %lld,",vec[i*2+2]);
    }
    cout << " " << endl;
  }
}
