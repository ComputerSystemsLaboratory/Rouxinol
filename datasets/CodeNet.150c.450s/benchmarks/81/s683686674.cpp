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

const int INF = 1e8;

int e[10][10];

int main(void) {
    while (true) {
        int i, j, k, m;
        cin >> m;
        if (m == 0) break;
        REP (i,10) REP (j,10) e[i][j] = i == j ? 0 : INF;
        int n = 0;
        REP (i,m) {
            int a, b, c;
            cin >> a >> b >> c;
            e[a][b] = c;
            e[b][a] = c;
            n = max({n,a+1,b+1});
        }
        REP (k,n) REP (i,n) REP (j,n) e[i][j] = min(e[i][j],e[i][k] + e[k][j]);
        int mn = INF, mi;
        REP (i,n) {
            int sum = 0;
            REP (j,n) sum += e[i][j];
            if (mn > sum) {
                mn = sum;
                mi = i;
            }
        }
        cout << mi << " " << mn << endl;
    }
    return 0;
}