#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
#include <assert.h>
#include <sstream>
#define REP(i,n) for(ll i=0;i<(n);i++)
#define MOD 1000000007
#define int long long
#ifdef int
const long long INF = LLONG_MAX / 10;
#else
const int INF = 1010101010;
#endif
using namespace std;
typedef long long ll;
typedef vector<vector<ll>> mat;
typedef pair<int, int> P;
//typedef pair<double, double> P;

#ifdef LOCAL
#define dump(...)                                         \
    do {                                                  \
        std::ostringstream os;                            \
        os << __LINE__ << ":\t" << #__VA_ARGS__ << " = "; \
        print_to(os, ", ", "\n", __VA_ARGS__);            \
        std::cerr << os.str();                            \
    } while (0)
#define dump_(a)                                          \
    do {                                                  \
        std::ostringstream os;                            \
        os << __LINE__ << ":\t" << #a << " = [";          \
        print_to_(os, ", ", "]\n", all(a));               \
        std::cerr << os.str();                            \
    } while (0)
#else
#define dump(...)
#define dump_(...)
#endif

template <typename T>
void print_to(std::ostream &os, const char *, const char *tail, const T &fst) {
    os << fst << tail;
}
template <typename Fst, typename... Rst>
void print_to(std::ostream &os, const char *del, const char *tail, const Fst &fst, const Rst &... rst) {
    os << fst << del;
    print_to(os, del, tail, rst...);
}
template <typename Iter>
void print_to_(std::ostream &os, const char *del, const char *tail, Iter bgn, Iter end) {
    for (Iter it = bgn; it != end;) {
        os << *it;
        if (++it != end) {
            os << del;
        } else {
            os << tail;
        }
    }
}
template <typename Fst, typename... Rst>
void println(const Fst &fst, const Rst &... rst) {
    print_to(std::cout, "\n", "\n", fst, rst...);
}
template <typename Fst, typename... Rst>
void print(const Fst &fst, const Rst &... rst) {
    print_to(std::cout, " ", "\n", fst, rst...);
}
template <typename Iter>
void println_(Iter bgn, Iter end) {
    print_to_(std::cout, "\n", "\n", bgn, end);
}
template <typename Iter>
void print_(Iter bgn, Iter end) {
    print_to_(std::cout, " ", "\n", bgn, end);
}

// const int MOD = 1000000007;
namespace trush {
    int _ = (std::cout.precision(10), std::cout.setf(std::ios::fixed), std::cin.tie(0),
             std::ios::sync_with_stdio(0), 0);
}

int n, m;
string S, T;
int dp[1010][1010];

signed main()
{
    //cin >> n >> m;
    cin >> S >> T;
    n = S.length();
    m = T.length();

    S = '-' + S;
    T = '-' + T;

    REP(i,m+1) dp[0][i] = i;
    REP(i,n+1) dp[i][0] = i;

    for (int i=1; i<n+1; i++) {
        for (int j=1; j<m+1; j++) {
            if (S[i] == T[j]) {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1] + 1, dp[i-1][j] + 1));
            } else {
                dp[i][j] = min(dp[i-1][j-1] + 1, min(dp[i][j-1] + 1, dp[i-1][j] + 1));
            }
        }
    }

    cout << dp[n][m] << endl;
}