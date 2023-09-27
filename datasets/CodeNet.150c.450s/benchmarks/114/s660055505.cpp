#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;
using LP = pair<ll, ll>;

struct DisjointSet {
private:
    vector<int> par;
    vector<int> rank;

public:
    DisjointSet(int n) {
        par = vector<int>(n);
        rep(i, n) par[i] = i;
        rank = vector<int>(n);
    }

    int find(int i) {
        if (par[i] == i) return i;
        int p = find(par[i]);
        par[i] = p;
        return p;
    }

    bool joint(int i, int j) {
        int pi = find(i);
        int pj = find(j);
        if (pi == pj) return false;

        if (rank[pi] < rank[pj]) this->par[pi] = pj;
        else if (rank[pj] < rank[pi]) this->par[pj] = pi;
        else {
            this->par[pi] = pj;
            rank[pj]++;
        }
        return true;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
    rep(i, n) {
        rep(j, n) {
            int w;
            cin>>w;
            if (w == -1) continue;

            vector<int> v = {w, i, j};
            q.push(v);
        }
    }
    DisjointSet ds(n);
    ll ans = 0;
    while (!q.empty()) {
        vector<int> v = q.top(); q.pop();
        int w = v[0];
        int v1 = v[1];
        int v2 = v[2];
        if (ds.joint(v1, v2)) ans += w;
    }
    cout<<ans<<endl;
}
