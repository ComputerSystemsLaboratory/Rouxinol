#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define erep(i,a,b) for(int i=a;i<=(int)(b);++i)
#define per(i,a,b) for(int i=(b);i>(a);--i)
#define eper(i,a,b) for(int i=((int)(a));i>=b;--i)
#define pb push_back
#define mp make_pair
#define INF 2000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a, b)*b;}

struct edge{int from, to, cost;};
int V, E, r;
vector<edge> g;
int d[100005];  
int main() {
 ios::sync_with_stdio ( false );
 cin.tie ( 0 );
    cin >> V >> E >> r;
    rep(i, 0, E) {
        int s, t, u;
        cin >> s >> t >> u;
        edge tmp;
        tmp.from = s, tmp.to = t, tmp.cost = u;
        g.pb(tmp);
    }

    fill(d, d+V, INF);
    d[r] = 0;
    while (1) {
        bool flag = false;
        rep(i, 0, E) {
            edge e = g[i];
            if (d[e.from] != INF && d[e.from] + e.cost < d[e.to]) {
                d[e.to] = d[e.from] + e.cost;
                flag = true;
            }
        }
        if (!flag) break;
    }
    rep(i, 0, V) {
        if (d[i] != INF) cout << d[i] << endl;
        else cout << "INF" << endl;
    }
    return 0;
}
