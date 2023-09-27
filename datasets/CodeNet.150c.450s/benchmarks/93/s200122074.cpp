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


typedef pair<double,double> Pd;

vector<pair<string,int>> b;

int partition(vector<pair<string,int>> &a, int p, int r){
  int x = a[r].second;
  int i = p-1;
  for (int j=p; j<r; j++){
    if (a[j].second <= x){
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i+1], a[r]);
  return i+1;
}

void quicksort(vector<pair<string,int>> &a, int p, int r){
  if (p < r){
    int q = partition(a, p, r);
    quicksort(a, p, q-1);
    quicksort(a, q+1, r);
  }
}

void mergesort(vector<pair<string,int>> &a){
  int n = a.size();
  if (n <= 1) return;
  int n2 = n/2;
  vector<pair<string,int>> b(n2); rep(i, n2) b[i] = a[i];
  vector<pair<string,int>> c(n-n2); rep(i, n-n2) c[i] = a[i+n2];
  mergesort(b);
  mergesort(c);
  // bとcはソートされている
  int bi = 0, ci = 0;
  for (int i=0; i<n; i++){
    if (bi == n2) a[i] = c[ci++];
    else if (ci == n-n2) a[i] = b[bi++];
    else if (b[bi].second <= c[ci].second) a[i] = b[bi++];
    else a[i] = c[ci++];
  }
}

int main() {
  int n; cin >>n;
  vector<pair<string,int>> a(n); rep(i, n) cin >>a[i].first >>a[i].second;
  b.assign(n, {"a", 0}); rep(i, n) b[i] = a[i];
  quicksort(a, 0, n-1);
  mergesort(b);
  bool ok = true;
  rep(i, n) if (a[i].first != b[i].first) ok = false;
  cout <<(ok ? "Stable" : "Not stable") <<endl;
  rep(i, n){
    cout <<a[i].first <<" " <<a[i].second <<endl;
  }
}
