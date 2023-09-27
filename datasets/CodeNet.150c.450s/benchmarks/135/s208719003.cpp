#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<int(N);++i)
#define rep1(i,N) for(int i=1;i<int(N);++i)
#define all(a) (a).begin(),(a).end()
#define print(v) { cerr<<#v<<": [ "; for(auto _ : v) cerr<<_<<", "; cerr<<"]"<<endl; }
#define printpair(v) { cerr<<#v<<": [ "; for(auto _ : v) cerr<<"{"<<_.first<<","<<_.second<<"}"<<", "; cerr<<"]"<<endl; }
#define dump(x) cerr<<#x<<": "<<x<<endl;
#define bit(k) (1LL<<(k))
typedef long long ll;
typedef pair<int, int> i_i;
typedef pair<ll, ll> l_l;
template <class T> using vec = vector<T>;
template <class T> using vvec = vector<vec<T>>;
template< typename T1, typename T2 >
ostream &operator<<(ostream &os, const pair< T1, T2 >& p) {
  os << "{" <<p.first << ", " << p.second << "}";
  return os;
}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const int INF = (ll)1e9;
const ll INFLL = (ll)1e18+1;
const ll MOD = (ll)1e9+7;
const double PI = acos(-1.0);
/*
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const string dir = "DRUL";
*/
bool solve(){
    ll N, M;
    cin >> N >> M;
    if(N == 0 && M == 0)return true;
    vector<ll> h(N),w(M);
    vector<ll> x(1,0), y(1,0);
    rep(i,N){
        cin >> h[i];
        x.push_back(x.back() + h[i]);
    }
    rep(j,M){
        cin >> w[j];
        y.push_back(y.back() + w[j]);
    }
    map<ll,int> mp[2];
    rep(i,N+1)rep(j,i){
        mp[0][abs(x[i] - x[j])]++;
    }
    rep(i,M+1)rep(j,i){
        mp[1][abs(y[i] - y[j])]++;
    }
    // print(x);
    // print(y);
    // print(mp[0]);
    // print(mp[1]);
    ll ans = 0;
    for(auto p: mp[0]){
        ans += mp[1][p.first] * p.second;
        // dump(ans);
    }
    cout << ans << endl;
    return false;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    while(1)if(solve())break;
}

