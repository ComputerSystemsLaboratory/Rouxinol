// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector< vector<P> >
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

int main(){
    int N;
    cin >> N;
    Graph M(N);
    rep(i, N){
        int u, k;
        cin >> u >> k;
        rep(j, k){
            int v, c;
            cin >> v >> c;
            M[u].push_back(P(v, c));
        }
    }

    vector<int> d(N, INF), p(N, -1);
    vector<bool> seen(N, false);
    d[0] = 0;

    while(1){
        int mincost = INF;
        int u;

        rep(i, N){
            if(!seen[i] && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }

        if(mincost == INF) break;
        seen[u] = true;

        rep(i, M[u].size()){
            int v = M[u][i].first, c = M[u][i].second;
            if(!seen[v] && d[u] + c < d[v]){
                d[v] = d[u] + c;
                p[v] = u;
            }
        }
    }

    rep(i, N){
        cout << i << ' ' << d[i] << endl;
    }

}
