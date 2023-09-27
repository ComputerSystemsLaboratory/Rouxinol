#include<bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)
#define repo(i, n) for(int i=1; i<=n; i++)
#define INF 1001001001
#define INFll 100100100100100
// debug用
#define PrintVec(x) for (auto elementPrintVec: x) { cout << elementPrintVec << " "; } cout << endl;

using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
const int mod = 1000000007;

#define INF 1e+9
#define MAX_V 100005

struct edge {
    int to;
    int cost;
};

int V;
vector<edge> G[MAX_V];
int d[MAX_V];
vector<int> ans(MAX_V, -1);

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        if (d[v] < p.first) continue;

        for (int i=0; i<G[v].size(); ++i) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                ans[e.to]=v;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main() {
    cin >> V;
    int E;
    cin >> E;
    for (int i=0; i<E; ++i) {
        int a, b;
        cin >> a >> b;
        a--;b--;
        edge e = {b, 1};
        edge e2 = {a, 1};
        G[a].push_back(e);
        G[b].push_back(e2);
    }
    dijkstra(0);
    ans[0]=0;
    rep(i, V){
      if(ans[i]==-1){
        cout << "No" <<endl;
        return 0;
      }
    }
    cout << "Yes" <<endl;
    repo(i, V-1){
      cout << ans[i]+1 << endl;
    }
}
