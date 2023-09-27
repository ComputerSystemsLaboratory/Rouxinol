#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <functional>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define REP(i, n) for (int i = 1; i < (int)(n); ++i)
using namespace std;
using lint = int64_t;

void solve() {
    int N;
    cin >> N;
    vector<lint> A(N);
    rep(i, N) cin >> A[i];
    string S;
    cin >> S;
    
    vector<lint> base;
    for (int i = N - 1; i >= 0; --i) {
        lint x = A[i];
        for (auto b : base) {
            x = min(x, x ^ b);
        }
        if (x) {
            if (S[i] == '0') {
                base.push_back(x);
                sort(base.rbegin(), base.rend());
            } else {
                cout << 1 << "\n";
                return;
            }
        }
    }
    cout << 0 << "\n";
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}
