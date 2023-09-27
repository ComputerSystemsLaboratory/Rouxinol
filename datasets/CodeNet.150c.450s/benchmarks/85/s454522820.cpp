#include <algorithm>
#include <cmath>
#include <ctime>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <cstring>
#include <tuple>
#include <bitset>
#include <unordered_map>
#include <climits>
using namespace std;
typedef long long ll;

int dp[101][101];

void init() {
    for (int i=0; i<101; ++i) {
        for (int j=0; j<101; ++j) {
            if (i == j) {
                dp[i][j] = 0;
                continue;
            }
            dp[i][j] = INT_MAX;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int,int>> mat(n);
    for (int i=0; i<n; ++i) {
        cin >> mat[i].first >> mat[i].second;
    }

    init();

    for (int l=2; l<=n; ++l) {
        for (int i=0; i<n; ++i) {
            int j = i+l-1;
            if (j > n) continue;
            for (int k=i+1; k<=j; ++k) {
                dp[i][j] = min(dp[i][j], dp[i][k-1] + dp[k][j]
                               + mat[i].first * mat[j].second * mat[k].first);
            }
        }
    }
    cout << dp[0][n-1] << endl;

    return 0;
}