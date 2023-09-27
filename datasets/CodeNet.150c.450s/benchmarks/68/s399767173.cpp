#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(c) begin(c), end(c)
#define dump(x) cerr << __LINE__ << ":\t" #x " = " << (x) << endl

int main(){
    int n;
    while(cin >> n && n){
        int a[1001];
        rep(i, n) cin >> a[i];
        int ans = 1e9;
        rep(i, n) rep(j, i) ans = min(ans, abs(a[i] - a[j]));
        cout << ans << endl;
    }
}