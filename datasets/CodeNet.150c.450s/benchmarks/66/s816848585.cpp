#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for (int i=0; i<(n); ++i)
#define RREP(i, n) for (int i=(int)(n)-1; i>=0; --i)
#define FOR(i, a, n) for (int i=(a); i<(n); ++i)
#define RFOR(i, a, n) for (int i=(int)(n)-1; i>=(a); --i)

#define SZ(x) ((int)(x).size())
#define all(x) begin(x),end(x)

#define dump(x) cerr<<#x<<" = "<<(x)<<endl
#define debug(x) cerr<<#x<<" = "<<(x)<<" (L"<<__LINE__<<")"<< endl;

template<class T>
ostream &operator<<(ostream &os, const vector <T> &v) {
    os << "[";
    REP (i, SZ(v)) {
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
using vvi = vector <vector<int>>;
using vvll = vector <vector<ll>>;

#define inf(T) (numeric_limits<T>::max() / 2)
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    int n; cin >> n;
    map<string,bool> key;
    REP(i, n) {
        string s; cin >> s;
        key[s] = 1;
    }
    int m; cin >> m;
    int opened = 0;
    REP(i, m) {
        string s; cin >> s;
        if (key.count(s)) {
            if (opened) {
                cout << "Closed by " << s << endl;
                opened = 0;
            } else {
                cout << "Opened by " << s << endl;
                opened = 1;
            }
        } else {
            cout << "Unknown " << s << endl;
        }
    }

    return 0;
}

