#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
#define rep(i,n) for(int i = 0; i < ((int)(n)); i++)   // 0-indexed昇順

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);
    rep(i,M) {
        int a, b; cin >> a >> b;
        a--, b--;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }

    vector<int> MS(N,-1); // MileStone
    queue<int> Q;
    Q.emplace(0);
    while (!Q.empty()) {
        int c = Q.front(); Q.pop();
        for (auto x : G[c]) {
            if (MS[x] == -1) {
                MS[x] = c;
                Q.emplace(x);
            }
        }
    }
    rep(i,N) if (MS[i] == -1) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++) {
        cout << MS[i] + 1 << endl;
    }
}
