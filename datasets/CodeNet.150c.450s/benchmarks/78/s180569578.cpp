#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
const int INF = 1<<29;

int main() {
    vector<int> dp(MAX, INF), odddp(MAX, INF);
    dp[0] = odddp[0] = 0;
    for (int i = 1;; ++i) {
        int num = i * (i+1) * (i+2) / 6;
        if (num >= MAX) break;
        for (int j = num; j < MAX; ++j) {
            dp[j] = min(dp[j], dp[j-num]+1);
            if (num & 1) odddp[j] = min(odddp[j], odddp[j-num]+1);
        }
    }
    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << dp[n] << " " << odddp[n] << endl;
    }
}
