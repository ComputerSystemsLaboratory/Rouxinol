#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, x, n) for(int i = x; i <= n; i++)
#define rep3(i, x, n) for(int i = x; i >= n; i--)
#define elif else if
#define sp(x) fixed << setprecision(x)
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const ll MOD = 1e9+7;
//const ll MOD = 998244353;
const int inf = (1<<30)-1;
const ll INF = (1LL<<60)-1;
const ld EPS = 1e-10;
template<typename T> bool chmax(T &x, const T &y) {return (x < y)? (x = y, true) : false;};
template<typename T> bool chmin(T &x, const T &y) {return (x > y)? (x = y, true) : false;};

int main(){
    int T;
    cin >> T;
    rep(t, T){
        int N; cin >> N;
        ll A[N];
        rep(i, N) cin >> A[i];
        string S; cin >> S;
        vector<ll> mat;
        int ref[60];
        fill(ref, ref+60, -1);
        int ans = 0;
        rep3(i, N-1, 0){
            ll memo = A[i];
            rep(j, 60){
                if(ref[j] != -1 && (memo & (1LL<<j))) memo ^= mat[ref[j]];
            }
            mat.pb(memo);
            rep(j, 60){
                if(memo & (1LL<<j)){
                    ref[j] = N-1-i;
                    if(S[i] == '1') ans = 1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}