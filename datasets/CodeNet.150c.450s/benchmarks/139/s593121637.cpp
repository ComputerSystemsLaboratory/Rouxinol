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

struct edge { int to, cost; };
typedef pair<int, int> P;

int N, M;
vi A, B;
vector<vector<edge>> G;


int main() {
    cin >> N >> M;
    A.resize(M); B.resize(M);
    rep(i, M) {
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
    }

    G.resize(N);
    rep(i, M) {
        G[A[i]].push_back(edge{B[i], 1});
        G[B[i]].push_back(edge{A[i], 1});
    }

    vi pre(N);
    vi d(N, INF);

    priority_queue<P, vector<P>, greater<P>> pq;
    d[0] = 0;
    pq.push(P{0, 0});

    while (!pq.empty()) {
        P p = pq.top(); pq.pop();
        int v = p.second;
        if (d[v] < p.first) continue;
        rep(i, G[v].size()) {
            edge e = G[v][i];

            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                pq.push(P{d[e.to], e.to});
                pre[e.to] = v;
            }
        }
    }

    bool ok = true;
    rep(i, N) {
        if (d[i] == INF) ok = false;
    }

    if (ok) {
        cout << "Yes" << endl;
        for (int i = 1; i < N; i++) {
            cout << (pre[i] + 1) << endl;
        }
    } else {
        cout << "No" << endl;
    }
}
