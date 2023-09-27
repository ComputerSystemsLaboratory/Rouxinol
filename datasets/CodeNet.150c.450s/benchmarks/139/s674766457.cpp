#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; ++i)
inline constexpr int Inf = (1 << 30);

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> g(N+1);
    rep(i,M) {
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<pair<int,int>> cf(N+1, {Inf,0});
    cf[1].first = 0;
    deque<int> m{1};
    while (m.size()) {
        const int room = m.front(); m.pop_front();
        const int nc = 1 + cf[room].first;
        for (auto to : g[room]) {
            if (nc < cf[to].first) {
                cf[to] = {nc, room};
                m.push_back(to);
            }
        }
    }
    cout << "Yes" << endl;
    for (int i=2; i<=N; ++i)
        cout << cf[i].second << "\n";
}
