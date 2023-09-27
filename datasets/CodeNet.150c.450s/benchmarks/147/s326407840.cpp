#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <deque>
#include <cmath>

using namespace std;
typedef long long ll;
ll mod = 1e9+7;
//ll mod = 998244353;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> ans(n+1, 0);
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            for (int k = 1; k <= 100; ++k) {
                int tmp = i*i + j*j + k*k + i*j + j*k +k*i;
                if (tmp <= n) {
                    ++ans[tmp];
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}
