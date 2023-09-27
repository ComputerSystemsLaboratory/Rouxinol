#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (int)(n); i++)
using ull = unsigned long long;
using ll = long long;

int par[10010];
int find(int x) {
    if (par[x] == x) return x;
    else return par[x] = find(par[x]);
}
bool same(int x, int y) {
    return find(x) == find(y);
}
void unit(int x, int y) {
    int px = find(x);
    int py = find(y);
    if (px != py) par[py] = px;
}

struct edge {
    int s;
    int t;
    int w;
};
bool operator<(edge e1, edge e2) {return e1.w < e2.w;}
bool operator>(edge e1, edge e2) {return e1.w > e2.w;}

int main() {
    int V, E;
    cin >> V >> E;

    priority_queue<edge, vector<edge>, greater<edge>> que;
    int si, ti, wi;
    rep(i, E) {
        cin >> si >> ti >> wi;
        que.push({si, ti, wi});
    }

    rep(i, V) par[i] = i;

    int ans = 0;
    while (!que.empty()) {
        edge e = que.top();
        que.pop();
        if (!same(e.s, e.t)) {
            ans += e.w;
            unit(e.s, e.t);
        }
    }

    cout << ans << endl;
    
    return 0;
}


