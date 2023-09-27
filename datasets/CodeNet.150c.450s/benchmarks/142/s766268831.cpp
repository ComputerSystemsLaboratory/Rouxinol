#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)
#define INF 1000000000000
#define MOD 1000000007
#define CHOOSE(a) CHOOSE2 a
#define CHOOSE2(a0, a1, a2, a3, a4, x, ...) x
#define debug_1(x1) cout << #x1 << ": " << x1 << endl
#define debug_2(x1, x2) \
    cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << endl
#define debug_3(x1, x2, x3)                                                 \
    cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " \
         << x3 << endl
#define debug_4(x1, x2, x3, x4)                                             \
    cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " \
         << x3 << ", " #x4 << ": " << x4 << endl
#define debug_5(x1, x2, x3, x4, x5)                                         \
    cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " \
         << x3 << ", " #x4 << ": " << x4 << ", " #x5 << ": " << x5 << endl
#ifdef _DEBUG
#define debug(...)                                                        \
    CHOOSE((__VA_ARGS__, debug_5, debug_4, debug_3, debug_2, debug_1, ~)) \
    (__VA_ARGS__)
#else
#define debug(...)
#endif

using namespace std;
using ll = long long;

template <class T>
void printVector(const vector<T>& v) {
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<long double> a(n + 1, 0);
    vector<long double> csum(n + 1, 0);
    reps(i, n) cin >> a[i];
    reps(i, n) csum[i] = log10(a[i]) + csum[i - 1];
    // printVector(csum);

    long double pre = csum[k];
    for (int i = k + 1; i <= n; i++) {
        long double result = csum[i] - csum[i - k];
        // debug(pre, result);
        if (pre < result)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        pre = result;
    }
    return 0;
}