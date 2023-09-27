#include <iostream>
#include <vector>

using namespace std;
int main(){
//    freopen("in", "r", stdin);

    int n,m;
    cin >> n >> m;
    vector<int> v(m);
    vector<int> dp(50001, 1 << 29);
    for (int i = 0; i < m; ++i){
        int c;
        cin >> c;
        v[i] = c;
    }
    dp[0] = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j + v[i] <= n; ++j) {
            dp[j + v[i]] = min(dp[j + v[i]] , dp[j] + 1);
        }
    }
    cout << dp[n] << endl;
    return 0;
}