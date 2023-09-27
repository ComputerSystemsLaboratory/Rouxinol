#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

typedef long long ll;
typedef pair<int, int> P;

#define MAX 100005
#define INF INT_MAX

vector< vector<int> > adj;
vector<int> serial;

void dfs(int v, int sn)
{
    serial[v] = sn;
    for (auto e : adj[v]) {
        if (serial[e]) continue;
        dfs(e, sn);
    }
}

int main(int, char**)
{
    int n, m;
    cin >> n >> m;

    adj.assign(n, vector<int>());
    int s, t;
    rep(i,m) {
        cin >> s >> t;
        adj[s].push_back(t);
        adj[t].push_back(s);
    }


    serial.assign(n, 0);
    int sn = 1;
    rep(i,n) {
        if (serial[i]) continue;
        dfs(i, sn++);
    }
    int q;
    cin >> q;
    rep(i,q) {
        cin >> s >> t;
        if (serial[s] == serial[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}

