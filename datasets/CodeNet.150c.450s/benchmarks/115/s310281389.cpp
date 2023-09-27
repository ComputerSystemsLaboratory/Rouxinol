#include <iostream>
#include <string>
#include <algorithm>
const int MAX_S = 1005;
using namespace std;

int main(void) {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string x, y;
        cin >> x >> y;
        x = ' ' + x;
        y = ' ' + y;

        int dp[MAX_S][MAX_S];
        for (auto j = 1; j < x.size(); j++) {
            dp[j][0] = 0;
        }
        for (auto k = 1; k < y.size(); k++) {
            dp[0][k] = 0;
        }

        int maxlength = 0;
        for (auto j = 1; j < x.size(); j++) {
            for (auto k = 1; k < y.size(); k++) {
                if (x[j] == y[k]) {
                    dp[j][k] = dp[j-1][k-1] + 1;
                } else {
                    dp[j][k] = max(dp[j-1][k], dp[j][k-1]);
                }
                maxlength = max(maxlength, dp[j][k]);
            }
        }

        cout << maxlength << endl;
    }

    return 0;
}