#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
#define all(v) v.begin(), v.end()
#define allR(v) v.rbegin(), v.rend()
#define PRINT(v) for (auto x : (v)) cout <<x <<" " ; cout <<endl;
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
typedef pair<int,int> Pi;
const ll MOD = 1000000007;
const ll INF = 10000000000000000;
const int inf = 1001001001;
vector<int> x4 = {0, 1, 0, -1}, x8 = {0, 1, 1, 1, 0, -1, -1, -1};
vector<int> y4 = {1, 0, -1, 0}, y8 = {1, 1, 0, -1, -1, -1, 0, 1};
template<class T> inline bool chmin(T& a, T b){if (a>b){a = b; return true;}return false;}
template<class T> inline bool chmax(T& a, T b){if (a<b){a = b; return true;}return false;}
template<class T> inline T powerM(T a,T b){if (b==0) return 1;
T tmp = powerM(a,b/2); if (b%2==0) return tmp*tmp%MOD; else return tmp*tmp%MOD*a%MOD; }
template<class T> inline T power(T a,T b,T m){ if (b==0) return 1;
  T tmp = power(a,b/2,m); if (b%2==0) return tmp*tmp%m; else return tmp*tmp%m*a%m; }
template<class T> inline T gcd(T a, T b){if (b==0) return a; return gcd(b, a%b);}
template<class T> inline T lcm(T a, T b){return a / gcd(a,b) * b;}
// ax+by=gcd(a,b)を解く
template<class T> inline T extgcd(T a,T b,T &x,T &y){if (b==0){x=1; y=0; return a;} T d=extgcd(b,a%b,y,x); y -= a/b*x; return d;}
void hey(){ cout <<"hey" <<endl; }

template<class T> struct edge { int to; T cost;};


int main() {
  string s; cin >>s; int n = s.size();
  stack<int> sta; // '\'が出てきた時のindexを格納
  stack<Pi> sta2; // 各水たまりの最初のindexと面積を格納
  for (int i=0; i<n; i++){
    if (s[i] == '/'){
      if (!sta.empty()){
        int prei = sta.top(); sta.pop();
        Pi com = {prei, i-prei};
        // これをsta2に入れようとするが、これよりfirstが大きいやつがいれば統合
        while (!sta2.empty() && com.first < sta2.top().first){
          com.second += sta2.top().second;
          sta2.pop();
        }
        sta2.push(com);
      }
    }else if (s[i] == '_') continue;
    else{
      sta.push(i);
    }
  }
  int sum = 0;
  stack<int> sta3;
  while (!sta2.empty()){
    sum += sta2.top().second;
    sta3.push(sta2.top().second); sta2.pop();
  }
  cout <<sum <<endl;
  cout <<sta3.size();
  while (!sta3.empty()){
    int v = sta3.top(); sta3.pop();
    cout <<" " <<v;
  }
  cout <<endl;
}
