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

    for (int x = x0; x < W; x++) {
        if (ts[y][x] != c) break;
        ++cnt;
    }

    return cnt >= 3;
}

void remove_ts(int y, int x0) {
    int c = ts[y][x0];

    for (int x = x0; x < W; x++) {
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
        for (int x = 0; x < W; x++) {
            for (int y2 = y + 1; y2 < H; y2++) {
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

    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            if (can_remove(y, x)) {
                remove_ts(y, x);
                removed = true;
            }
        }
    }

    return removed;
}

void dump() {
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
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

        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                cin >> ts[y][x];
            }
        }

        cout << solve() << endl;
    }

	return 0;
}