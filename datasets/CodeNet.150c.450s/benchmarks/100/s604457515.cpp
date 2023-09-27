#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int n;
    cin >> n;
    int ans = 1;
    rep(i, 1, n + 1) ans *= i;
    cout << ans << endl;
}