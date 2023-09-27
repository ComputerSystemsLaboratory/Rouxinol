// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector< vector<int> >
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

int main(){
    int N;
    cin >> N;
    Graph M(N, vector<int>(N));
    rep(i, N){
        rep(j, N){
            cin >> M[i][j];
            if(M[i][j] == -1) M[i][j] = INF;
        }
    }

    vector<int> d(N, INF), p(N, -1);
    vector<bool> visited(N);
    d[0] = 0;
    p[0] = -1;
    int sum = 0;

    while(1){
        int mincost = INF;
        int u;
        rep(i, N){
            if( !visited[i] && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }

        if(mincost == INF) break;
        sum += d[u];
        visited[u] = true;

        rep(v, N){
            if( !visited[v] && M[u][v] != INF){
                if(M[u][v] < d[v]){
                    d[v] = M[u][v];
                    p[v] = u;
                }
            }
        }
    }
    
    cout << sum << endl;

}
