#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <map>
#include <stack>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for(int i = 0; i < m; i++)cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());

    vector<int> dp(n + 1, 1e9);

    dp[0] = 0;

    for(int i = 0; i < m; i++){
        for(int j = v[i]; j <= n; j++){
            dp[j] = min(dp[j], dp[j - v[i]] + 1);
        }
    }
    cout << dp[n] << endl;
}