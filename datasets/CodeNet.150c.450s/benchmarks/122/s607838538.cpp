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

ll len = 0;
vector<ll> vec(2e6,0);

void insert(ll k){
  vec[len] = k;
  ll t1,t2;
  t1 = len;
  while(t1 != 0){
    t2 = (t1-1)/2;
    if(vec[t2] < vec[t1]){
      swap(vec[t2],vec[t1]);
    }else{
      break;
    }
    t1 = t2;
  }
  len++;
}
ll extract(){
  ll ret = vec[0];
  ll piv = 0;
  ll t1,t2;
  while(1){
    t1 = piv*2+1;
    t2 = piv*2+2;
    if(t1 >= len){
      break;
    }else if(t2 == len){
      vec[piv] = vec[t1];
      piv = t1;
      break;
    }else{
      if(vec[t1] < vec[t2]){
        vec[piv] = vec[t2];
        piv = t2;
      }else{
        vec[piv] = vec[t1];
        piv = t1;
      }
    }
  }

  vec[piv] = vec[len-1];
  t1 = piv;
  while(t1 != 0){
    t2 = (t1-1)/2;
    if(vec[t2] < vec[t1]){
      swap(vec[t2],vec[t1]);
    }else{
      break;
    }
    t1 = t2;
  }

  len--;
  return ret;
}
int main(){
  string str;
  ll ret;
  while(1){
    cin >> str;
    if(str == "insert"){
      cin >> t1;
      insert(t1);
    }else if(str == "extract"){
      ret = extract();
      cout << ret << endl;
    }else if(str == "end"){
      break;
    }
//    rep(i,len){
//      cout << vec[i] << " ";
//    }
//    cout << endl;
  }
  return 0;
}
