#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;
    ll A, B;
    vector<vector<ll>> G(N);
    for (ll i=0; i<M; i++) {
        cin >> A >> B;
        A--;
        B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    vector<ll> dist(N,-1); // 未訪問に初期化
    queue<ll> q;

    dist[0] = 0;
    q.push(0);
    vector<ll> ans(N);

    while(!q.empty()) {
        ll v = q.front();
        q.pop();

        for (ll nv : G[v]) {
            if (dist[nv] != -1) {
                continue;
            }
            dist[nv] = dist[v] + 1;
            ans[nv] = v+1;
            q.push(nv);
        }
    }
    
    for (ll i=1; i<N; i++) {
        if (dist[i]==-1) {
            cout << "No" << endl;
            exit(0);
        }
    }
    
    cout << "Yes" << endl;
    for (ll i=1; i<N; i++) {
        cout << ans[i] << endl;
    }
}