#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef long long ll;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;

int N;

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);

    cin >> N;
    vector<ll> a(N);
    vector<ll> mn(N,INF);
    ll ans = -INF;
    REP(i,N) cin >> a[i];
    mn[0] = a[0];
    rep(i,1,N){
        mn[i] = min(a[i-1],mn[i-1]);
    }
    rep(i,1,N){
        ans = max(ans,a[i]-mn[i]);
    }
    cout << ans << '\n';
    return 0;
}
