#include <bits/stdc++.h>

using namespace std;

#define all(c) ((c).begin()), ((c).end())
#define dump(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define REP(i, a, b) for (int i = a; i < (int)(b); i++)
#define rep(i, n) REP(i, 0, n)
#define mp make_pair
#define fst first
#define snd second
#define pb push_back

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef pair<int, int> pii;

const int INF = 1 << 29;
const double EPS = 1e-10;

double zero(double d) {
    return d < EPS ? 0.0 : d;
}

template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    return os << '(' << p.first << ',' << p.second << ')';
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &a) {
    os << '[';
    rep(i, a.size()) os << (i ? " " : "") << a[i];
    return os << ']';
}

// to avoid error on mingw
string toString(int i) {
    stringstream ss;
    ss << i;
    return ss.str();
}

const int M = 1000000007;
// a^k
ll fpow(ll a, ll k, int M) {
    ll res = 1ll;
    ll x = a;
    while (k != 0) {
        if ((k & 1) == 1)
            res = (res * x) % M;
        x = (x * x) % M;
        k >>= 1;
    }
    return res;
}

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(8);
    ios_base::sync_with_stdio(false);

    int R, C;
    while(cin >> R >> C, (R||C)) {

        bool sen[R][C];
        memset(sen, 0, sizeof(sen));
        rep(r, R) {
            rep(c, C) {
                int b;
                cin >> b;
                if (b == 1)
                    sen[r][c] = true;
            }
        }

        int res = 0;
        rep(bits, 2 << R) {
            rep(i, R)
                if (((bits >> i) & 0x1) == 1)
                    rep(c, C) sen[i][c] ^= 0x1;

            int tmpRes = 0;
            rep(c, C) {
                int trueNum = 0;
                rep(r, R)
                    if (sen[r][c]) trueNum++;
                tmpRes += max(trueNum, R - trueNum);
            }
            res = max(res, tmpRes);

            rep(i, R)
                if (((bits >> i) & 0x1) == 1)
                    rep(c, C) sen[i][c] ^= 0x1;
        }

        cout << res << endl;
    }
    
    return 0;
}