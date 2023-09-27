//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using ld = long double;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vvi G(n);
    rep(i, n) {
        int id, k;
        cin >> id >> k;
        id--;
        G[id].resize(k);
        rep(j, k) {
            cin >> G[id][j];
            G[id][j]--;
        }
    }

    vi dist(n, -1);
    dist[0] = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        for(int ne:G[now]) {
            if(dist[ne] != -1) continue;
            dist[ne] = dist[now] + 1;
            q.push(ne);
        }
    }

    rep(i, n) {
        cout << i + 1 << ' ' << dist[i] << endl;
    }
}
