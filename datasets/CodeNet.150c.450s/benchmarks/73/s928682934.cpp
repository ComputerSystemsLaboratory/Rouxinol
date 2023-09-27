#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<string> vstr;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<pair<ll, ll>> vpll;
typedef priority_queue<ll, vector<ll>, greater<ll>> spqll;  // 小さい順に取り出し
typedef priority_queue<ll, vector<ll>, less<ll>> bpqll;     // 大きい順に取り出し

#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define IREP(i, v) for (auto i = (v).begin(); i != (v).end(); ++i)
#define FI first
#define SE second
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define TS to_string
#define NP next_permutation
#define ALL(v) (v).begin(), (v).end()
#define SZ(x) (ll) x.size()
#define endl "\n"


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
class segment_tree{
  private:
    ll N = 1;
    vector<ll> data;
    ll def = 0;
  public:

    segment_tree(vector<ll> vec){
      ll m = vec.size();
      while(N < m) N *= 2;
      data.resize(2*N, def);

      for(int i=0;i<m;i++) update(i,vec[i]);
    }

    void update(ll k, ll a){
      k += N - 1;
      data[k] += a;
      while(k > 0){
        k = (k-1) / 2;
        data[k] = data[k * 2 + 1] +  data[k * 2 + 2];
      }
    }

    // [a,b) のクエリを処理する
    int query_(ll a, ll b, ll k, ll l, ll r){
      // [a,b)　と [l,r) が交差しない時
      if(r <= a || b <= l) return def; 

      // 完全に含まれている時
      if(a <= l && r <= b) return data[k];
      else{
        ll mid = (l + r) / 2;
        // 2つの子の最小値
        ll vl = query_(a,b,k*2+1,l,mid);
        ll vr = query_(a,b,k*2+2,mid,r);
        return (vl + vr);
      }
    }

    int query(ll a, ll b){
      return query_(a, b, 0, 0, N);
    }
};

//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  ll n;
  cin >> n;
  vll v(n,0);
  segment_tree tree(v);
  ll q;
  cin >> q;
  REP(i,q){
    ll com;
    cin >> com;
    if(com == 0){
      ll x, y;
      cin >> x >> y;
      tree.update(x-1,y);
    }
    else{
      ll x, y;
      cin >> x >> y;
      cout << tree.query(x-1,y) <<endl;
    }
  }

  return 0;
}


