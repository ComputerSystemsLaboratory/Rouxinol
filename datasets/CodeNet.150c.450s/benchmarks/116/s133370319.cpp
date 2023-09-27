#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll solve(int n, int k) {
    ll a[n+1];
    a[0] = 0;
    for(int i=1;i<=n;++i){
        cin >> a[i];
        a[i] += a[i-1];
    }

    ll ans = 0LL;
    for(int i=1;i<=n-k;++i) {
        ans = max(ans, a[i+k-1]-a[i-1]);
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;

    while(n) {
        cout << solve(n, k) << endl;
        cin >> n >> k;
    }
}
