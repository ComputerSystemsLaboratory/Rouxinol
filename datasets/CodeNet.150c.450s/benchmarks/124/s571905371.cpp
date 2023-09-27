//include
//------------------------------------------
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <limits>
using namespace std;

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,a,b) for(int i=(a);i>(b);i--)
#define REP(i,n)  FOR(i,0,n)

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//debug
//-------------------------------------------
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define INF (1<<21)
#define NOT_VISITED 0
#define FOUND 1
#define VISITED 2

//typedef
//-------------------------------------------
typedef long long ll;
typedef pair<int, int> Pair;

int n;
vector<Pair> g[101];
int d[101];
int p[101];
int visited[101];

int dijkstra(int start) {
    d[start] = 0;
    p[start] = -1;

    while(1) {
        int mincost = INF;
        int u = -1;
        REP(i, n) {
           if (visited[i] != VISITED && d[i] < mincost) {
                mincost = d[i];
                u = i;
            }
        }
        if (u == -1) break;
        visited[u] = VISITED;

        REP(j, n) {
            REP(k, g[u].size()) {
                if (visited[j] != VISITED && g[u][k].first == j) {
                    if (d[u] + g[u][k].second < d[j]) {
                        d[j] = d[u] + g[u][k].second;
                        p[j] = u;
                        visited[j] = FOUND;
                    }
                }
            }
        }
    }
    return 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    REP(i, 101) {
        visited[i] = NOT_VISITED;
        d[i] = INF; 
        p[i] = -1;
    }

    cin >> n;
    REP(i, n) {
        int u, k;
        cin >> u >> k;
        REP(j, k) {
            int v, c;
            cin >> v >> c;
            Pair e(v, c);
            g[u].push_back(e);
        }
    }

    dijkstra(0);

    REP(i, n)  {
        cout << i << " " << d[i] << endl;
    }

    return 0;
}