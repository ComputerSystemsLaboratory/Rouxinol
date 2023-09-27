#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    // cout << fixed << setprecision(10) << flush;

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int INF = (1<<30);
    vector<int> dp(n, INF);
    for(int i=0; i<n; i++){
        auto itr = lower_bound(dp.begin(), dp.end(), a[i]);
        int ind = distance(dp.begin(), itr);
        dp[ind] = a[i];
    }

    auto itr_ans = lower_bound(dp.begin(), dp.end(), INF);
    int ans = distance(dp.begin(), itr_ans);
    cout << ans << endl;

    return 0;
}
