#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for (int i=0; i<(n); ++i)
#define RREP(i, n) for (int i=(int)(n)-1; i>=0; --i)
#define FOR(i, a, n) for (int i=(a); i<(n); ++i)
#define RFOR(i, a, n) for (int i=(int)(n)-1; i>=(a); --i)

#define SZ(x) ((int)(x).size())
#define all(x) begin(x),end(x)

#define dump(x) cerr<<#x<<" = "<<(x)<<endl
#define debug(x) cerr<<#x<<" = "<<(x)<<" (L"<<__LINE__<<")"<<endl;

template<class T>
ostream &operator<<(ostream &os, const vector <T> &v) {
    os << "[";
    REP(i, SZ(v)) {
        if (i) os << ", ";
        os << v[i];
    }
    return os << "]";
}

template<class T, class U>
ostream &operator<<(ostream &os, const pair <T, U> &p) {
    return os << "(" << p.first << " " << p.second << ")";
}

template<class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using P = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

const ll MOD = 1e9 + 7;
const int INF = INT_MAX / 2;
const ll LINF = LLONG_MAX / 2;
const ld EPS = 1e-9;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    map<char,int> mp;
    mp['m'] = 1000;
    mp['c'] = 100;
    mp['x'] = 10;
    mp['i'] = 1;

    int n; cin >> n;
    auto str2int = [&](string s) {
        int co = 1, ret = 0;
        for (char c : s) {
            if (mp.count(c)) {
                ret += co * mp[c];
                co = 1;
            } else {
                co = c - '0';
            }
        }
        return ret;
    };
    auto int2str = [&](int x) {
        string ret;
        for (char c : {'m', 'c', 'x', 'i'}) {
            if (x / mp[c] > 1) ret += to_string(x / mp[c]);
            if (x / mp[c] > 0) ret += c;
            x %= mp[c];
        }
        return ret;
    };

    while (n--) {
        string s, t; cin >> s >> t;
        cout << int2str(str2int(s) + str2int(t)) << endl;
    }

    return 0;
}

