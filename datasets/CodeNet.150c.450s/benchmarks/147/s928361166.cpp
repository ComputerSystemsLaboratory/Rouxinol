#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, srt, end) for (long long i = (srt); i < (long long)(end); i++)

int main(){
    ll n;
    cin >> n;
    vector<ll> cnt(n+1, 0);
    rep(x, 1, 101){
        rep(y, 1, 101){
            rep(z, 1, 101){
                ll f = x*x + y*y + z*z + x*y + y*z + z*x;
                if(f <= n) cnt[f]++;
            }
        }
    }
    rep(i, 1, n+1) cout << cnt[i] << endl;
    return 0;
}