#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using Graph = vector<vector<int>>;
int main(void) {
    int N,M;
    cin >> N >> M;
    Graph G;
    G.assign(N,vector<int>());
    rep(i,M){
        int A,B;
        cin >> A >> B;
        --A,--B;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    vector<int> dist(N,-1);
    vector<int> prev(N,-1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()){
        // queから先頭頂点を取り出す
        int v = que.front();
        que.pop();
        // 先頭頂点からたどれる頂点を全て調べる
        for(auto nv:G[v]){
            if(dist[nv] == -1){
               dist[nv] = dist[v] + 1;
            prev[nv] = v;
            que.push(nv);
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < N; ++i) cout << prev[i] + 1 << endl;


    return 0;
}