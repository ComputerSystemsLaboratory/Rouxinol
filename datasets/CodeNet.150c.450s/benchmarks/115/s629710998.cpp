#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int dp[1010][1010];

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a;
        cin >> b;
        for (int i = 0; i < 1010; i++) {
            for (int j = 0; j < 1010; j++) {
                dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= a.size(); i++) {
            for (int j = 1; j <= b.size(); j++) {
                if (a[i-1] == b[j-1]) {
                    dp[i][j] = max(dp[i-1][j-1] + 1, max(dp[i-1][j], dp[i][j-1]));
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
//                cout << dp[i][j] << "  ";
            }
//            cout << endl;
        }
        cout << dp[a.size()][b.size()] << endl;
    }
    return 0;
}