#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
#define INF __INT32_MAX__
#define LINF __LONG_LONG_MAX__

int main() {
    int N, M; cin >> N >> M;
    vi A(M), B(M); rep(i, M) { cin >> A[i] >> B[i]; A[i]--; B[i]--; }

    vector<vi> G(N);
    rep(i, M) {
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    queue<int> q;
    vi dist(N, INF);
    vi pre(N, -1);

    dist[0] = 0;
    q.push(0);

    while (!q.empty()) {
        int p = q.front(); q.pop();
        rep(i, G[p].size()) {
            int a = G[p][i];
            if (dist[a] != INF) continue;
            q.push(a);
            dist[a] = dist[p] + 1;
            pre[a] = p;
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < N; i++) {
        cout << (pre[i] + 1) << endl;
    }
}
