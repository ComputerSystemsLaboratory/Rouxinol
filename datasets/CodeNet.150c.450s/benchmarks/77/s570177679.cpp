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

#define X first
#define Y second

const int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
const char dirchar[] = {'W', 'N', 'E', 'S'};

bool field[21][21];

int main() {
    int N, M;
    while (cin >> N, N) {
        fill_n((bool *)field, 21*21, false);
        REP(i, N) {
            int x, y;
            cin >> x >> y;
            field[y][x] = true;
        }
        int x = 10, y = 10;
        if (field[y][x]) {
            field[y][x] = false;
            N--;
        }
        cin >> M;
        REP(i, M) {
            char d;
            int step;
            cin >> d >> step;
            int dir = find(dirchar, dirchar+4, d)-dirchar;
            REP(i, step) {
                x += dx[dir];
                y += dy[dir];
                if (field[y][x]) {
                    field[y][x] = false;
                    N--;
                }
            }
        }
        cout << (N == 0 ? "Yes" : "No") << endl;
    }
}