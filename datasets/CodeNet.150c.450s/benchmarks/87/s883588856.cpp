#include <bits/stdc++.h>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef long long LL;
typedef pair<int, int> PII;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<double> VD;
typedef vector<VD> VVD;
typedef vector<string> VS;
typedef vector<VS> VVS;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<PII> VPII;

#define fst first
#define snd second
// #define Y first
// #define X second
#define MP make_pair
#define PB push_back
#define EB emplace_back 
#define ALL(x) (x).begin(),(x).end()
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define rep(i, N) for (int i = 0; i < (N); i++)
#define rep2(i, j, N, M) rep(i, N) rep(j, M)
#define rep3(i, j, k, N, M, L) rep(i, N) rep(j, M) rep(k, L)
#define REP(i, init, N) for (int i = (init); i < (N); i++)

template < typename T > inline T fromString(const string &s) { T res; ISS iss(s); iss >> res; return res; };
template < typename T > inline string toString(const T &a) { OSS oss; oss << a; return oss.str(); };

const int INF = 0x3f3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const double DINF = 0x3f3f3f3f;
const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

constexpr int W = 5;
int H;
VVI ts;

int score;

bool can_remove(int y, int x0) {
    int c = ts[y][x0];
    if (c == 0) return false;

    int cnt = 0;

    REP(x, x0, W) {
        if (ts[y][x] != c) break;
        ++cnt;
    }

    return cnt >= 3;
}

void remove_ts(int y, int x0) {
    int c = ts[y][x0];

    REP(x, x0, W) {
        if (ts[y][x] == c) {
            score += ts[y][x];
            ts[y][x] = 0;
        } else {
            return;
        }
    }
}

void fall_down() {
    for (int y = H - 1; y >= 0; --y) {
        rep(x, W) {
            REP(y2, y + 1, H) {
                if (ts[y2][x] == 0) {
                    ts[y2][x] = ts[y2 - 1][x];
                    ts[y2 - 1][x] = 0;
                }
            }
        }
    }
}

bool remove_all_ts() {
    bool removed = false;

    rep2(y, x, H, W) {
        if (can_remove(y, x)) {
            remove_ts(y, x);
            removed = true;
        }
    }

    return removed;
}

void dump() {
    rep(y, H) {
        rep(x, W) {
            cout << ts[y][x] << " ";
        }
        cout << endl;
    }
}

int solve() {
    score = 0;

    while (remove_all_ts()) {
        fall_down();
    }

    return score;
}

int main(void) {
    while (cin >> H, H) {
        ts.clear();
        ts.resize(H, VI(W));

        rep2(y, x, H, W) {
            cin >> ts[y][x];
        }

        cout << solve() << endl;
    }

	return 0;
}