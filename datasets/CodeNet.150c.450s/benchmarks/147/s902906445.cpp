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
#include <cassert>

using namespace std;
typedef long long ll;
ll mod = 1e9+7;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int ans[10005];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            for (int k = 1; k <= 100; ++k) {
                int tmp = i * i + j * j + k * k + i * j + j * k + k * i;
                if ( tmp <= n) {
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
