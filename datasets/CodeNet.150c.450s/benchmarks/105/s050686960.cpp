#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(ll i=(x);i<(y);i++)
#define rrep(i,x,y) for(ll i=(ll)(y)-1;i>=(x);i--)
#define all(x) (x).begin(),(x).end()
#ifdef LOCAL
#define dump(x)  cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl
#define dassert(...) assert(__VA_ARGS__)
#else
#define dump(x)
#define debug(x)
#define dassert(...)
#endif
//#define int long long

typedef long long ll;
const ll MOD = 1e9 + 7;
const long double EPS = 1e-8;


signed main(){
    int T;
    cin >> T;
    rep(ti,0,T) {
        int N;
        cin >> N;
        vector<ll> A(N);
        rep(i,0,N) cin >> A[i];
        string S;
        cin >> S;

        // if base[i] != 0, base[i]'s ith bit is 1 and the other base's ith bit is 0.
        vector<ll> base(60);
        bool zero = true;
        rrep(i,0,N) {
            if (S[i] == '0') {
                // remove 1 from A[i]'s bits where base exists.
                rrep(bi,0,base.size()) {
                    if (base[bi] != 0 && (A[i] & (1LL << bi))) {
                        A[i] ^= base[bi];
                    }
                }
                // insert A[i] into base
                rrep(bi, 0, base.size()) {
                    // found
                    if (A[i] & (1LL << bi)) {
                        base[bi] = A[i];
                        // remove 1 in bi'th bit from other base
                        rep(j,0,base.size()) {
                            if (j != bi && (base[j] & (1LL << bi))) {
                                base[j] ^= base[bi];
                            }
                        }
                        break;
                    }
                }
            } else {
                rrep(bi, 0, base.size()) {
                    if (base[bi] != 0 && (A[i] & (1LL << bi))) {
                        A[i] ^= base[bi];
                    }
                }
                // A[i] is not included in base
                if (A[i] != 0) {
                    zero = false;
                    break;
                }
            }
        }
        cout << (zero ? 0 : 1) << endl;
    }
    return 0;
}
