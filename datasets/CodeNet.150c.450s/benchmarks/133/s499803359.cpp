#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <string>
#define _repargs(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _repargs(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define mod 1000000007
#define inf 2000000007
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
template <typename T>
inline void output(T a, int p = 0) {
    if(p) cout << fixed << setprecision(p)  << a << "\n";
    else cout << a << "\n";
}
// end of template

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    // source code
    int D;
    cin >> D;
    vector<ll> C(26);
    rep(i, 26) cin >> C[i];
    vector<vector<ll>> S(D, vector<ll>(26));
    rep(i, D) rep(j, 26) cin >> S[i][j];
    vector<ll> T(D);
    rep(i, D) {
        cin >> T[i];
        T[i]--;
    }
    
    ll ans = 0;
    vector<ll> pen(26);
    rep(i, D) {
        ans += S[i][T[i]];
        rep(j, 26) pen[j] += C[j];
        pen[T[i]] = 0;
        rep(j, 26) {
            ans -= pen[j];
        }
        output(ans);
    }
    
    
    
    return 0;
}
