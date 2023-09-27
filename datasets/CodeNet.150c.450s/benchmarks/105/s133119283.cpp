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

vector<ll> vec;

int main(){
  ll t;
  cin >> t;
  string str;
  ll n;
  rep(_,t){
    vec.clear();
    cin >> n;
    rep(i,n){
      cin >> t1;
      vec.push_back(t1);
    }
    cin >> str;
    vector<ll> arr;
    bool can = true;
    rep_rev(i,n){
      if(vec[i] == 0){
        continue;
      }
      t1 = vec[i];
      ull len = arr.size();
      rep(j,len){
        chmin(t1,t1^arr[j]);
      }
      if(t1 != 0){
        //cout << t1 << " ";
        if(str[i] == '1'){
          can = false;
        }else{
          arr.push_back(t1);
        }
      }
    }
    if(can){
      cout << 0 << endl;
    }else{
      cout << 1 << endl;
    }
  }
}
