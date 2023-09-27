#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e12;

int V, E;
long long d[110][110];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> V >> E;
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            d[i][j] = INF;
        }
        d[i][i] = 0;
    }
    for(int i = 0; i < E; i++){
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = c;
    }
    for(int k = 0; k < V; k++){
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(d[i][i] != 0){
                cout << "NEGATIVE CYCLE" << endl;
                return 0;
            }
        }
    }
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(j) cout << " ";
            if(d[i][j] > 1e11) cout << "INF";
            else cout << d[i][j];
        }
        cout << endl;
    }
}