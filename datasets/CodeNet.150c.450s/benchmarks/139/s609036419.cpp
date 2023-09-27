#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <list>
#include <numeric>
#include <stack>
#include <iomanip>
#include <random>
#include <complex>
#include <functional>
#include <tuple>
#include <new>

//#include "All.h"

using namespace std;

#define EPS (1e-9)
#define INF (1e9)
#define MOD (ll)(1e9 + 7)
#define PI (acos(-1))
#define REP(i,a,n) for(int i=a;i<n;i++)
#define rep(i, n) REP(i,0,n)
#define allof(a) (a).begin(), (a).end()

#define Yes(q) ((q) ? "Yes" : "No")
#define YES(q) ((q) ? "YES" : "NO")
#define Possible(q) ((q) ? "Possible" : "Impossible")
#define POSSIBLE(q) ((q) ? "POSSIBLE" ; "IMPOSSIBLE")

using ll = long long int;

ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll beki(ll a, ll b) {
    ll tmp = 1;
    rep(i, b) tmp *= a;
    return tmp;
}

int N, M;
vector<int> v[100010];
int depth[100010];
int ans[100010] = {};

void bfs();

int main() {
    
    cin >> N >> M;
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
        //双方向にvectorでグラフを表現
    }

    bfs();

    cout << "Yes" << endl;
    REP(i, 2, N + 1) {
        cout << ans[i] << endl;
    }
}

void bfs() {
    queue<int> q;
    //全てをINFで初期化
    rep(i, 100010) depth[i] = INF;
    q.push(1);
    depth[1] = 0;

    //キューが空になるまでループ
    while (q.size()) {
        //キューの先頭を取り出す
        int a = q.front(); q.pop();
        //移動先をループ
        rep(i, (int)v[a].size()) {
            //移動した後の部屋をbとする
            int b = v[a][i];
            if (depth[b] > depth[a] + 1) {
                q.push(b);
                depth[b] = depth[a] + 1;
                ans[b] = a;
            }
        }
    }
}