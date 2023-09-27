#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(x) push_back(x)
#define uniq(x) (x).erase(unique(all(x)),(x).end())

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

const int MAX = 64;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const int MOD = 1000000007;

int dx[8]={1,0,-1,1,-1,1,0,-1};
int dy[8]={1,1,1,0,0,-1,-1,-1};

int maze[MAX][MAX];

int H, W, ans;

bool range(int y, int x) {
    return (0 <= x && x < W && 0 <= y && y < H);
}

void dfs(int y, int x){
    maze[y][x] = 0;
    rep(8, d) {
        if (range(y+dy[d], x+dx[d]) && maze[y+dy[d]][x+dx[d]]) {
            dfs(y+dy[d], x+dx[d]);
        }
    }
    return;
}

void solve(void){
    while (1) {
        //input & init
        scanf("%d %d\n", &W, &H);
        if (W == 0 && H == 0) break;
        rep(H, y) rep(W, x) scanf("%d", &maze[y][x]);
        ans = 0;

        rep(H, y) rep(W, x) {
            if (maze[y][x]) {
                dfs(y, x);
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}

int main(void){
  solve();
  return 0;
}

