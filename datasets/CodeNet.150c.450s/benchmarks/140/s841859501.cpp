#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
template<class T>void p(T x){cout << x << endl;}
template<class T>void pvec(vector<T>& a){rep(i, a.size()-1){cout << a[i] << " ";} cout << a[a.size()-1] << endl;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

typedef pair<int, int> P;

int main()
{
    int v, e; cin >> v >> e;
    vector<P> G[v];

    int from, to, cost;
    rep(i, e){
        cin >> from >> to >> cost;
        G[from].push_back(P(-cost, to));
        G[to].push_back(P(-cost, from));
    }

    int ans=0;
    priority_queue<P> que;
    vector<int> X;
    vector<bool> in(v, false);
    X.push_back(0); in[0] = true;
    for(P ed: G[0]) que.push(ed);

    while(X.size()!=v){
        P ed = que.top(); que.pop();
        cost = -ed.first; to = ed.second;
        // p(cost);
        if(in[to]) continue;

        ans += cost;
        in[to] = true; X.push_back(to);
        for(P e: G[to]) que.push(e);
    }

    p(ans);
    return 0;
}
