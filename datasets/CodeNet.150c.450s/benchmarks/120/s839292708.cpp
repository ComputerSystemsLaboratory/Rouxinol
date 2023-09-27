#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

#define GET_ARG(a,b,c,F,...) F
#define REP3(i,s,e) for (i = s; i <= e; i++)
#define REP2(i,n) REP3 (i,0,(int)(n)-1)
#define REP(...) GET_ARG (__VA_ARGS__,REP3,REP2) (__VA_ARGS__)
#define RREP3(i,s,e) for (i = s; i >= e; i--)
#define RREP2(i,n) RREP3 (i,(int)(n)-1,0)
#define RREP(...) GET_ARG (__VA_ARGS__,RREP3,RREP2) (__VA_ARGS__)
#define DEBUG(x) cerr << #x ": " << x << endl

typedef long long ll;

constexpr int INF = 1e8;
constexpr int MOD = 1e9+7;

int a[10][10000];
int cnt[10000];
int r, c;

int dfs(int x) {
    int i;
    if (x == r) {
        int ret = 0;
        REP (i,c) ret += max(cnt[i],r-cnt[i]);
        return ret;
    }
    int ret = 0;
    REP (i,c) if (a[x][i]) cnt[i]++;
    ret = max(ret,dfs(x+1));
    REP (i,c) {
        if (a[x][i]) cnt[i]--;
        else cnt[i]++;
    }
    ret = max(ret,dfs(x+1));
    REP (i,c) if (!a[x][i]) cnt[i]--;
    return ret;
}

int main(void) {
    int i, j;
    while (true) {
        scanf("%d%d",&r,&c);
        if (r == 0 && c == 0) break;
        REP (i,r) REP (j,c) scanf("%d",&a[i][j]);

        printf("%d\n",dfs(0));
    }
    return 0;
}