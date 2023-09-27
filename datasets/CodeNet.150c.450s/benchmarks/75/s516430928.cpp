#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<string> vstr;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll, ll>> vpll;
typedef priority_queue<ll, vector<ll>, greater<ll>> spqll;  // 小さい順に取り出し
typedef priority_queue<ll, vector<ll>, less<ll>> bpqll;     // 大きい順に取り出し

#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define IREP(i, v) for (auto i = (v).begin(); i != (v).end(); i++)
#define FI first
#define SE second
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define TS to_string
#define NP next_permutation
#define ALL(v) (v).begin(), (v).end()
#define SZ(x) (ll) x.size()
#define SP(x) setprecision((ll)x)


ll INF = 1e9;
ll MOD = 1000000007;
ll LINF = 1e18;
ld EPS = 1e-9;
ld PI = M_PI;
vll dx = {1, 0, -1, 0, 1, -1, -1, 1};
vll dy = {0, 1, 0, -1, 1, 1, -1, -1};
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;} //最大公約数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b;}     //最小公倍数

void yes(){ cout << "Yes" << endl;}
void no(){ cout << "No" << endl;}

//-----------------------------------------
int par(int i){
  return i / 2;
}
int lef(int i){
  return i * 2;
}
int rig(int i){
  return 2 * i + 1;
}

void max_Heap(vll &A, int i){
  int h = SZ(A)-1;
  int l = lef(i);
  int r = rig(i);
  int large = i;
  if(l <= h && A[l] > A[i]) large = l;
  if(r <= h && A[r] > A[large]) large = r;

  if(large != i){
    swap(A[i],A[large]);
    max_Heap(A,large);
  }
}
void tr(vll &A){
  int h = SZ(A)-1;
  for(int i=h/2;i>=1;i--){
    max_Heap(A, i);
  }
}
//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  int n;
  cin >> n;
  vll a(n+1);
  REP(i,n) cin >> a[i+1];
  tr(a);
  REP(i,n) cout << " " << a[i+1];
  cout <<endl;





  return 0;
}

