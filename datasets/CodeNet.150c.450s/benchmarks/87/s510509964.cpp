#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define RFOR(i,a,b) for(int i=(int)(b-1);i>=(int)(a);--i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define RREP(i,n) for(int i=(int)(n-1);i>=0;--i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SZ(a) ((int)(a).size())
#define BIT(x, i) (((x) >> (i)) & 1)
#define SQ(x) ((x)*(x))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int W = 5;
int H;

bool disappear(int x, int y, int c, int& n, vvi& field) {
    int sx = x+1;
    while (sx < W) {
        if (field[y][sx] == c) {
            n++;
            if (disappear(sx, y, c, n, field)) {
                field[y][sx] = 0;
            }
        } else {
            break;
        }
        sx++;
    }
    return n >= 3;
}

void fall(vvi& field) {
    RREP(x, 5) {
        RREP(y, H) {
            if (field[y][x] == 0) {
                for (int sy = y-1; sy >= 0; sy--) {
                    if (field[sy][x] != 0) {
                        swap(field[y][x], field[sy][x]);
                        break;
                    }
                }
            }
        }
    }
}

int main() {
    while (cin >> H, H) {
        vvi field(H, vi(5));
        REP(y, H) REP(x, W) cin >> field[y][x];

        int score = 0;
        bool redo;
        do {
            redo = false;
            REP(y, H) {
                REP(x, W) {
                    if (field[y][x] != 0) {
                        int n = 1;
                        if (disappear(x, y, field[y][x], n, field)) {
                            score += field[y][x] * n;
                            field[y][x] = 0;
                            redo = true;
                        }
                    }
                }
            }
            fall(field);
        } while (redo);
        cout << score << endl;
    }
}