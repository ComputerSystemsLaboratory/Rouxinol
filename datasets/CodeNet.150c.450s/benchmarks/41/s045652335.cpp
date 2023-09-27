#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)for(int i=0;i<(n);i++)
using ll = long long;
using P = pair<int, int>;
using Matrix = vector<vector<int>>;

const int INF = 2000000000;

int main()
{
    int V, E;
    cin >> V >> E;
    Matrix dist;
    dist = Matrix(V, vector<int>(V, INF));
    rep(i, V) dist[i][i] = 0;
    rep(i,E){
        int from, to, cost;
        cin >> from >> to >> cost;
        dist[from][to] = cost;
    }
    rep(k,V){
        rep(i,V){
            if(dist[i][k]!=INF){
                rep(j,V){
                    if(dist[k][j]!=INF){
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                        if(i==j && dist[i][j]<0){
							printf("NEGATIVE CYCLE\n");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    rep(i,V){
        rep(j,V){
            if(dist[i][j]==INF){
                cout << "INF";
            }else{
                cout << dist[i][j];
            }
            if(j!=V-1)
                cout << " ";
        }
        cout << endl;
    }
}
