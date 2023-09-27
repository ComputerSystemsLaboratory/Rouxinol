#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i,n) for (int i = 0; i < (n); ++i)

const int INF = 1001001001;
vector<int> to[100005];


void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B){
    rep(i,M){
        ll a = A[i]-1;
        ll b = B[i]-1;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    queue<int> q;
    vector<int> dist(N, INF);
    vector<int> pre(N,-1);
    dist[0] = 0;
    q.push(0);
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(int u : to[v]){
            if(dist[u] != INF) continue;
            dist[u] = dist[v] + 1;
            pre[u] = v;
            q.push(u);
        }
    }

    cout << "Yes" << endl;
    rep(i,N){
        if(i == 0)continue;
        int ans = pre[i];
        ans++;
        cout << ans << endl;
    }

}

int main(){
    ll N,M;
    scanf("%lld",&N);
    scanf("%lld",&M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
