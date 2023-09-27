#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<int> coins(m);
    

    for(int i = 0; i < m; ++i) cin >> coins[i];
    
    vector<int> ans(n + 1, 100000);
    ans[0] = 0;

    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(i - coins[j] >= 0) {
                ans[i] = min(ans[i], ans[i - coins[j]] + 1);
            }
        }
    }

    cout << ans[n] << endl;

    return 0;
}