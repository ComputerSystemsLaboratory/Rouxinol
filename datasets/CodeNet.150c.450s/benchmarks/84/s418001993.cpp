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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) (int)(x).size()
using namespace std;
using ll = long long;
constexpr int inf = 1000000000;
constexpr ll INF = 1000000000000000000;

struct FenwickTree {
    int length;
    vector<ll> node;
    FenwickTree (int N) : length(N), node(length + 1, 0) {}
    void add(int idx, ll val) {
        ++idx;
        while (idx <= length) {
            node[idx] += val;
            idx += (idx & (-idx));
        }
    }
    ll getsum(int idx) {
        ll ans = 0;
        while (idx) {
            ans += node[idx];
            idx -= (idx & (-idx));
        }
        return ans;
    }
};

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> S(N);
    rep(i, N) {
        cin >> S[i].first;
        S[i].second = i;
    }
    sort(ALL(S));
    vector<int> A(N);
    A[S[0].second] = 0;
    for (int i = 1; i < N; ++i) {
        if (S[i - 1].first == S[i].first) A[S[i].second] = A[S[i - 1].second];
        else A[S[i].second] = A[S[i - 1].second] + 1;
    }
    ll ans = 0;
    FenwickTree FT(N);
    rep(i, N) {
        ans += FT.getsum(N) - FT.getsum(A[i] + 1);
        FT.add(A[i], 1);
    }
    cout << ans << "\n";
    return 0;
}

