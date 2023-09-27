#include <bits/stdc++.h>

using namespace std;

#define int long long
// #define double long double
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define FORR(i, a, b) for(int i = (a); i > (b); --i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOREACH(x, a) for(auto &(x) : (a))
#define VECCIN(x)                                                              \
    for(auto &youso_ : (x)) cin >> youso_
#define bitcnt(x) __builtin_popcount(x)
#define lbit(x) __builtin_ffsll(x)
#define rbit(x) (64 - __builtin_clzll(x))
#define fi first
#define se second
#define All(a) (a).begin(), (a).end()
#define rAll(a) (a).rbegin(), (a).rend()
#define sz(s) (ll) s.size()
#define cinfast() cin.tie(0), ios::sync_with_stdio(false)
#define debug(x) cerr << #x << " = " << (x) << endl;
#define loop(x)                                                                \
    LCIN(loop);                                                                \
    while(loop--) {                                                            \
        x;                                                                     \
    }
#define PERM(c)                                                                \
    sort(All(c));                                                              \
    for(bool cp = true; cp; cp = next_permutation(All(c)))
#define COMB(n, k)                                                             \
    for(ll bit = (1LL << k) - 1; bit < (1LL << n); bit = next_combination(bit))
#define PERM2(n, k)                                                            \
    COMB(n, k) {                                                               \
        vector<int> sel;                                                       \
        for(int bitindex = 0; bitindex < n; bitindex++)                        \
            if(bit >> bitindex & 1) sel.emplace_back(bitindex);                \
        PERM(sel) { Printv(sel); }                                             \
    }
#define MKORDER(n)                                                             \
    vector<int> od(n);                                                         \
    iota(All(od), 0LL);

template <typename T = long long> inline T IN() {
    T x;
    cin >> x;
    return (x);
}
inline void CIN() {}
template <class Head, class... Tail>
inline void CIN(Head &&head, Tail &&... tail) {
    cin >> head;
    CIN(move(tail)...);
}
template <class Head> inline void COUT(Head &&head) { cout << (head) << "\n"; }
template <class Head, class... Tail>
inline void COUT(Head &&head, Tail &&... tail) {
    cout << (head) << " ";
    COUT(forward<Tail>(tail)...);
}

#define CINT(...)                                                              \
    int __VA_ARGS__;                                                           \
    CIN(__VA_ARGS__)
#define CCIN(...)                                                              \
    char __VA_ARGS__;                                                          \
    CIN(__VA_ARGS__)
#define DCIN(...)                                                              \
    double __VA_ARGS__;                                                        \
    CIN(__VA_ARGS__)
#define LCIN(...)                                                              \
    long long __VA_ARGS__;                                                     \
    CIN(__VA_ARGS__)
#define SCIN(...)                                                              \
    string __VA_ARGS__;                                                        \
    CIN(__VA_ARGS__)
#define Printv(v)                                                              \
    {                                                                          \
        REP(hoge, v.size())                                                    \
        cout << v[hoge] << (hoge == v.size() - 1 ? "" : " ");                  \
        cout << "\n";                                                          \
    }
template <typename T = string> inline void eputs(T s) {
    cout << s << "\n";
    exit(0);
}
template <typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val) {
    std::fill((T *)array, (T *)(array + N), val);
}

long long next_combination(long long sub) {
    long long x = sub & -sub, y = sub + x;
    return (((sub & ~y) / x) >> 1) | y;
}
template <class T> inline bool chmax(T &a, const T &b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, const T &b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}

// generic lambdas
template <typename first>
#if defined(__has_cpp_attribute) && __has_cpp_attribute(nodiscard)
[[nodiscard]]
#elif defined(__GNUC__) &&                                                     \
    (__GNUC__ > 3 || __GNUC__ == 3 && __GNUC_MINOR__ >= 4)
__attribute__((warn_unused_result))
#endif // defined(__has_cpp_attribute) && __has_cpp_attribute(nodiscard)
static inline constexpr decltype(auto)
fix(first &&f) noexcept {
    return [f = std::forward<first>(f)](auto &&... args) {
        return f(f, std::forward<decltype(args)>(args)...);
    };
}

template <typename T> using PQG = priority_queue<T, vector<T>, greater<T>>;
template <typename T> using PQ = priority_queue<T>;

typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;
typedef pair<ll, ll> PL;
typedef vector<PL> VPL;
typedef vector<bool> VB;
typedef vector<double> VD;
typedef vector<string> VS;
template <typename T> using V = vector<T>;
template <typename T> using VV = vector<vector<T>>;

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
// const int MOD = 998244353;
const int dw[] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dh[] = {0, 1, 1, 1, 0, -1, -1, -1};
#define PI 3.141592653589793230
#define EPS 1e-7

const int MAX_ROW = 70;  // to be set appropriately
const int MAX_COL = 205; // to be set appropriately
struct BitMatrix {
    int H, W;
    bitset<MAX_COL> val[MAX_ROW];
    BitMatrix(int m = 1, int n = 1) : H(m), W(n) {}
    inline bitset<MAX_COL> &operator[](int i) { return val[i]; }
};

int GaussJordan(BitMatrix &A, bool is_extended = false) {
    int rank = 0;
    for(int col = 0; col < A.W; ++col) {
        if(is_extended && col == A.W - 1) break;
        int pivot = -1;
        for(int row = rank; row < A.H; ++row) {
            if(A[row][col]) {
                pivot = row;
                break;
            }
        }
        if(pivot == -1) continue;
        swap(A[pivot], A[rank]);
        for(int row = 0; row < A.H; ++row) {
            if(row != rank && A[row][col]) A[row] ^= A[rank];
        }
        ++rank;
    }
    return rank;
}

int linear_equation(BitMatrix A, vector<int> b, vector<int> &res) {
    int m = A.H, n = A.W;
    BitMatrix M(m, n + 1);
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) M[i][j] = A[i][j];
        M[i][n] = b[i];
    }
    int rank = GaussJordan(M, true);

    // check if it has no solution
    for(int row = rank; row < m; ++row)
        if(M[row][n]) return -1;

    // answer
    res.assign(n, 0);
    for(int i = 0; i < rank; ++i) res[i] = M[i][n];
    return rank;
}

const int MD = 62;

void solve() {
    LCIN(N);
    VL A(N);
    VECCIN(A);
    SCIN(S);
    VL os, zs;
    REPR(i, sz(S) - 1) {
        if(S[i] == '0') {
            zs.emplace_back(A[i]);
        } else {
            if(zs.empty()) {
                COUT(1);
                return;
            }
            BitMatrix B(MD + 1, sz(zs));
            for(long long d = MD; d >= 0; --d) {
                for(int i = 0; i < sz(zs); ++i) {
                    if(zs[i] & (1LL << d)) B[MD - d][i] = 1;
                }
            }
            VI b(MD + 1), res(sz(zs));
            b.assign(MD + 1, 0LL);
            for(long long d = MD; d >= 0; --d) {
                if(A[i] & (1LL << d)) b[MD - d] = 1;
            }
            if(linear_equation(B, b, res) == -1) {
                COUT(1);
                return;
            }
        }
    }
    COUT(0);
}

signed main() {
    cinfast();
    // cout << fixed << setprecision(0);
    loop(solve());
    // solve();
}
