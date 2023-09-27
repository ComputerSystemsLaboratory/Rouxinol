#define ALGORITHM   0
#define CLIMITS     0
#define CMATH       0
#define DEQUE       0
#define LIST        0
#define MAP         0
#define QUEUE       1
#define SET         0

#define DP          0
#define DIRECTIONS  0

#define _GLIBCXX_DEBUG
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

#if ALGORITHM
#include <algorithm>
#endif
#if CLIMITS
#include <climits>
#endif
#if CMATH
#include <cmath>
#endif
#if DEQUE
#include <deque>
#endif
#if LIST
#include <list>
#endif
#if MAP
#include <map>
#endif
#if QUEUE
#include <queue>
#endif
#if SET
#include <set>
#endif

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Sp(p) cout<<setprecision(25)<< fixed<<p<<endl;

#define endl '\n'
#define pb push_back
#define pf push_front
#define mp make_pair

const long double PI = 3.1415926535897932384626433832795028841971L;
const long long INF9 = 1000000001;
const long long INF18 = (long long)1e18 + 1;
const long long MOD = 1000000007;

#if DP
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a = b; return 1; } return 0; }
#endif

#if DIRECTIONS
vector<int> dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1};
vector<int> dx2 = { 1,1,0,-1,-1,-1,0,1 }, dy2 = { 0,1,1,1,0,-1,-1,-1 };
#endif
//
//
//
//
//
//
//
//
//

vector<int> to[100005];

/*メイン関数*/

int main() {
FASTIO;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;

        to[a].pb(b);
        to[b].pb(a);
    }

    queue<int> q;
    vector<int> dist(n, INF9);
    vector<int> pre(n, -1);

    dist[0] = 0;
    q.push(0);

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for(int u : to[v]){
            if(dist[u] != INF9) continue;
            dist[u] = dist[v] + 1;
            pre[u] = v;
            q.push(u);
        }
    }

    cout << "Yes" << endl;
    for(int i = 0; i < n; i++){
        if(i == 0) continue;
        int ans = pre[i];
        ans++;
        cout << ans << endl;
    }

return 0;
}