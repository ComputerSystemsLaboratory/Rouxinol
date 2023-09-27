#include <bits/stdc++.h>
using namespace std;

#define DUMP(x) cerr << #x << "=" << x << endl
#define DUMP2(x, y) cerr<<"("<<#x<<", "<<#y<<") = ("<<x<<", "<<y<<")"<< endl
#define BINARY(x) static_cast<bitset<16> >(x)

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

#define in_range(x, y, w, h) (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
const int INF   = 1e9;
const ll  INFLL = 1e18;
typedef pair<int, int> PII;
typedef vector<vector<int>> Graph;
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};

int H, W = 5; 

int erase(vector<vector<int>> &board)
{
    int res = 0;

    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            if (board[y][x] == -1) continue;

            int cnt = 1;
            for (int xx=x+1; xx<W; xx++) {
                if (board[y][x] != board[y][xx]) break;
                else cnt++;
            }

            if (cnt >= 3) {
                res += cnt * board[y][x];
                for (int i=0; i<cnt; i++) {
                    board[y][x+i] = -1;
                }
            }

        }
    }
    return res;
}

bool drop(vector<vector<int>> &board)
{
    bool res = false;
    for (int x=0; x<W; x++) {
        for (int y=H-2; y>=0; y--) {
            int yy = y;
            while (yy < H-1 && board[yy][x] > 0 && board[yy+1][x] == -1) {
                swap(board[yy+1][x], board[yy][x]);
                yy++;
                res = true;
            }
        }
    }
    return res;
}

void dump(vector<vector<int>> board)
{
    cerr << "-------------" << endl;
    rep(y, H) {
        rep(x, W) {
            cout << board[y][x] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);

    while (cin >> H, H) {
        vector<vector<int>> board(H, vector<int>(W, 0));
        rep(y, H) rep(x, W) cin >> board[y][x];

        int score = 0;
        bool updated = true;
        while (updated) {
#ifdef DEBUG
            dump(board);
#endif

            updated = false;

            score += erase(board);
            updated = drop(board);

            if (!updated) break;
        }
#ifdef DEBUG
        dump(board);
#endif
        cout << score << endl;
    }
}


