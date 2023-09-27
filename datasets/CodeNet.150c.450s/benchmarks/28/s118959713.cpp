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
ll NIL = -1;
ll MOD = 1000000007;
ll LINF = 1e18;
ld EPS = 1e-9;
ld PI = M_PI;
vll dx = {1, 0, -1, 0, 1, -1, -1, 1};
vll dy = {0, 1, 0, -1, 1, 1, -1, -1};
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;} //最大公約数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b;}     //最小公倍数

void yes(){ cout << "yes" << endl;}
void no(){ cout << "no" << endl;}

//-----------------------------------------
ll n, k;
ll v[100000 + 10];

bool ok(ll p){
  int cnt = 1;
  int tmp = 0;
  for(ll i=0;i<n;i++){
    if(v[i] > p) return false;
    else{
      if(tmp+v[i]<=p){
        tmp += v[i];
      }
      else{
        tmp = v[i];
        cnt++;
      }
    }
  }
  return cnt <= k;
}

//-----------------------------------------
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> k;
  REP(i,n) cin >> v[i];

  ll lef = 0;
  ll rig = 1e9;
  while(rig - lef > 1){
    ll mid = (lef + rig) /2;
    if(ok(mid)) rig = mid;
    else lef = mid;
  }
  cout << rig <<endl;


    
  return 0;
}


