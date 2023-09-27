#include <bits/stdc++.h>
#define LOOP(n) for (int _i = 0; _i < (n); _i++)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define RREP(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, r, n) for (int i = (r); i < (n); ++i)
#define ALL(obj) begin(obj), end(obj)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

const int INF = 2100100100;
const int MOD = 1e9 + 7;

// 多次元 vector 生成
template <class T>
vector<T> make_vec(size_t a) {
    return vector<T>(a);
}
template <class T, class... Ts>
auto make_vec(size_t a, Ts... ts) {
    return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}
template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

int N, M, K, Q, W, H, R, C;
string S;

int main() {
    vector<int> ans;
    while (true) {
        cin >> N;
        if (N == 0) break;
        vector<int> A(24 * 3600 + 5);
        REP(i, N) {
            int h, m, s;
            scanf("%2d:%2d:%2d ", &h, &m, &s);
            A[h * 3600 + m * 60 + s]++;
            scanf("%2d:%2d:%2d\n", &h, &m, &s);
            A[h * 3600 + m * 60 + s]--;
        }
        int sum = A[0];
        REP(i, 24 * 3600) {
            A[i + 1] += A[i];
            chmax(sum, A[i + 1]);
        }
        ans.push_back(sum);
    }
    for (auto i : ans) {
        cout << i << endl;
    }
    return 0;
}

