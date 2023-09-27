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


int H, W;
const int MAX=102;
string field[MAX];
bool vis[MAX][MAX];

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

const char DUMMY = '-';

int dfs(int r, int c) {

    if(vis[r][c])
        return 0;

    char floor = field[r][c];
    field[r][c] = DUMMY;
    vis[r][c] = true;

    rep(i,4) {
        int nr = r + dy[i];
        int nc = c + dx[i];

        if(nr < 0 || H <= nr || nc < 0 || W <= nc)
            continue;

        if(floor == field[nr][nc])
            dfs(nr, nc);
    }

    return 1;
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(8);
    ios_base::sync_with_stdio(false);

    while(cin>>H>>W, (H||W)) {
        memset(vis,0,sizeof(vis));

        rep(i,H)
            cin >> field[i];

        int res = 0;
        rep(i,H) {
            rep(j,W) {
                if(field[i][j] != DUMMY)
                    res += dfs(i, j);
            }
        }

        cout << res << endl;
    }

    return 0;
}