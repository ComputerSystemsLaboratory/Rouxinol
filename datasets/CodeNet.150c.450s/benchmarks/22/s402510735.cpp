#include <bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
const long long LINF = 1e18;
#define dump(x)  cout << 'x' << ' = ' << (x) << ` `;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define FOREACH(x,a) for(auto& (x) : (a) )
typedef long long ll;
using namespace std;
typedef pair<ll, ll> P;

struct Edge {
   ll from, to, cost;
   Edge(){}
   Edge(ll from, ll to, ll cost):from(from),to(to),cost(cost){}
};

vector<Edge> g;

bool bellman_ford (int s, int V, vector<ll> &dp) {
    bool neg_loop = false;
    for (int i = 0; i < V; ++i) {
        bool update = false;
        for (auto &&e:g) {
            if (dp[e.from]!=LINF && dp[e.to]>dp[e.from]+e.cost) {
                dp[e.to]=dp[e.from]+e.cost;
                update=true;
            }
        }
        if (!update) break;
        if (i==V-1) {
            neg_loop=true;
            break;
        }
    }
    return neg_loop;
}

int main(int argc, char const *argv[]) {
    int V,E,s; cin>>V>>E>>s;

    rep(i,E) {
        int a,b,c;cin>>a>>b>>c;
        g.push_back(Edge(a,b,c));
    }

    vector<ll> dp(V,LINF);
    dp[s]=0;
    if (bellman_ford(s,V,dp)) cout<<"NEGATIVE CYCLE"<<endl;
    else for (auto &&e: dp) {
        if (e!=LINF) cout<<e<<endl;
        else cout << "INF" << endl;
    }
    return 0;
}
