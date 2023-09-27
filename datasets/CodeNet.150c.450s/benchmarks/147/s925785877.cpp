#include <bits/stdc++.h>
using namespace std;
// using ll = long long;
// using p = pair<int, int>;

#define rep(i, n) for(int i=0;i<(n);i++) 
#define rep1e(i, n) for(int i=1;i<=(n);i++) 

void solve(long long N){
    vector<int> ans(N+1);
    int sz = 100;
    rep1e(x, sz) {
        rep1e(y, sz) {
            rep1e(z, sz){
                int su = x*x + y*y + z*z;
                su += x*y + y*z + z*x;
                if (su > N) continue;
                ans[su]++;
            }
        }
    }

    rep1e(i, N) {
        cout << ans[i] << endl;
    }
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
