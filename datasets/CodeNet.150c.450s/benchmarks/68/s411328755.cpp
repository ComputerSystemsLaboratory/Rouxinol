#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <limits>
#include <cmath>
#include <cassert>

using namespace std;
using ll = long long;

const int INF = 1<<30;
const int MOD = (int)1e9 + 7;
const int MAX_N = (int)1e5 + 5;
#define debug(x) cout << #x << ": " << x << endl

signed main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n, n)
    {
        vector<int> A(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        sort(A.begin(), A.end());
        int ans = INF;
        for(int i = 0; i < n - 1; i++)
        {
            ans = min(ans, abs(A[i] - A[i + 1]));
        }
        cout << ans << endl;
    }
    return 0;
}


