#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdint>
#include <cstdio>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

using int64 = int64_t;

constexpr int64 MOD = 1000000007;

int N, K;
int64 a[100000];

int main() {
    while (true) {
        cin >> N >> K;
        if (N == 0 && K == 0) break;
        for (int j = 0; j < N; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < N-1; ++j) {
            a[j+1] += a[j];
        }

        int64 ans = a[K-1];
        for (int j = K; j < N; ++j) {
            ans = max(ans, a[j] - a[j-K]);
        }
        cout << ans << endl;
    }
    return 0;
}