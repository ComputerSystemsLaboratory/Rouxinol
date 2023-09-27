#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = ((int)a) - 1; i >= ((int)a); --i)
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

void dump_impl(string s) {}
template <class H, class... T>
void dump_impl(string s, H head, T... tail) {
    int p = 0;
    rep(i, 0, sz(s)) {
        char x = s[i];
        if (p == 0 && x == ',') {
            cerr << "=" << head << ", ";
            dump_impl(s.substr(i + 1), tail...);
            return;
        } else {
            cerr << x;
            if (x == '(') p++;
            if (x == ')') p--;
        }
    }
}
#ifdef LOCAL
#define dump(...) do { cerr << "\x1b[33;1m"; dump_impl(#__VA_ARGS__ ",", __VA_ARGS__); cerr << "\x1b[0m" << endl; } while (0) 
#else
#define dump(...)
#endif

constexpr int DY[8] = {-1, 0, 1, 0, -1, 1, 1, -1};
constexpr int DX[8] = {0, 1, 0, -1, 1, 1, -1, -1};

int decode(string s) {
    string sep = "mcxi";
    vi mul = {1000, 100, 10, 1};
    int ret = 0;
    string tmp;
    rep(i, 0, sz(s)) {
        int idx = sep.find(s[i]);
        if (idx != string::npos) {
            if (tmp.empty()) {
                ret += mul[idx];
            } else {
                ret += mul[idx] * stoi(tmp);
            }
            tmp.clear();
        } else {
            tmp += s[i];
        }
    }
    return ret;
}
string encode(int x) {
    dump(x);
    int d = x % 10;
    x /= 10;
    int c = x % 10;
    x /= 10;
    int b = x % 10;
    x /= 10;
    int a = x % 10;
    x /= 10;
    dump(a, b, c, d);
    
    string ret;
    if (a > 1) ret += to_string(a) + "m";
    if (a == 1) ret += "m";
    if (b > 1) ret += to_string(b) + "c";
    if (b == 1) ret += "c";
    if (c > 1) ret += to_string(c) + "x";
    if (c == 1) ret += "x";
    if (d > 1) ret += to_string(d) + "i";
    if (d == 1) ret += "i";
    return ret;
}

void solve() {
    string a, b;
    cin >> a >> b;
    cout << encode(decode(a) + decode(b)) << endl;
}

signed main() {
    int N;
    cin >> N;
    rep(i, 0, N) {
        solve();
    }
}
