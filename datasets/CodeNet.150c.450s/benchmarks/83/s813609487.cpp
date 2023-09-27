#include<bits/stdc++.h>

using namespace std;

int main()
{

    int dp[10000 + 1] = { 0 };
    int N, W;
    cin >> N; cin >> W;
    vector<int> v, w;
    for (int i = 0; i < N; i++) {
        int v_tmp, w_tmp;
        cin >> v_tmp; cin >> w_tmp;
        v.push_back(v_tmp); w.push_back(w_tmp);
    }

    for (int i = 0; i < N; i++) {
        for (int j = W; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    cout << dp[W] << endl;
    return 0;
}