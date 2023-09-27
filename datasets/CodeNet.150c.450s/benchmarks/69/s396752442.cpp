#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
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

int a[10];
stack<int> st[2];

bool dfs(int x) {
    if (x == 10) return true;
    int i;
    bool ret = false;
    REP (i,2) if (st[i].empty() || st[i].top() < a[x]) {
        st[i].push(a[x]);
        ret |= dfs(x+1);
        st[i].pop();
    }
    return ret;
}

int main(void) {
    int i, n;
    cin >> n;
    while (n--) {
        REP (i,10) cin >> a[i];
        if (dfs(0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}