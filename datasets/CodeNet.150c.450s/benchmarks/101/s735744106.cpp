#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int n, m;
vector<int> G[100000];
int id[100001];
int visit[100001] = {0};
int s, t;

void check(int x, int u) {
    visit[x] = 1;
    id[x] = u;

    int v;
    REP(i, G[x].size()) {
        v = G[x][i];
        if (visit[v] == 0) check(v, u);
    }
}

int main() {
    cin >> n >> m;
    int a, b;
    REP(i, m) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    REP(i, n) {
        if (visit[i] == 0) check(i, i);
    }

    int q;
    cin >> q;
    REP(i, q) {
        cin >> s >> t;
        if (id[s] == id[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
