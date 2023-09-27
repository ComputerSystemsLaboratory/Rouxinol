#include <bits/stdc++.h>
using namespace std;

// Debug
#define dump(x) cerr<<#x<<" = "<<(x)<<endl
#define debug(x) cerr<<#x<<" = "<<(x)<<" (L"<<__LINE__<<")"<< endl;

#define rep(i,n) for (int i=0, i##_len=(n); i<i##_len; ++i)

#define SZ(x) ((int)(x).size())

#define all(x) begin(x),end(x)


template<class T>
bool chmax(T& a, const T& b) {
    if (a < b) { a = b; return true; }
    return false;
}
template<class T>
bool chmin(T& a, const T& b) {
    if (b < a) { a = b; return true; }
    return false;
}

// std::vector debug
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (auto& e : v) os << e << ", ";
    return os << "]";
}

// std::pair debug
template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
    return os << "(" << p.first << " " << p.second << ")";
}

// infty
template<typename T>
T inf() { return numeric_limits<T>::max(); }

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using P = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<ll>>;

const ll MOD = 1e9+7;
const ld EPS = 1e-9;


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    for (;;) {
        int n, m, p;
        cin >> n >> m >> p;
        if (n == 0) break;
        --m;
        vi x(n);
        rep (i, n) cin >> x[i];
        if (x[m] == 0) {
            cout << 0 << endl;
            continue;
        }
        double sum = accumulate(all(x), 0);
        int ans = (sum / x[m]) * (100 - p);
        cout << ans << endl;
    }

    return 0;
}

