#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<pii> vpii;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n);i>=0;i--)
#define rrep2(i,a,b) for (int i=(a);i>b;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(a) (a).begin(),(a).end()

const int mod = 1e9 + 7;
const ll INF = 1<<30;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int V,E,r;
struct edge{ int to, cost; };
vector<edge> g[100000+5];
int d[100000+5];

void dijkstra(int s){
    priority_queue<pii, vector<pii>, greater<pii>> que;
    fill(d, d+V, INF);
    d[s] = 0;
    que.push(pii(0, s));

    while (!que.empty()){
        pii p = que.top();que.pop();
        int v = p.second;
        if (d[v] < p.first) continue;
        for (int i = 0; i < g[v].size(); i++){
            edge e = g[v][i];
            if (d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(pii(d[e.to], e.to));
            }
        }
    }
}

signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> V >> E >> r;
    rep(i,E){
        int s,t,d;
        cin >> s >> t >> d;
        g[s].pb(edge{t,d});
    }
    dijkstra(r);
    rep(i,V){
        if(d[i]==INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}