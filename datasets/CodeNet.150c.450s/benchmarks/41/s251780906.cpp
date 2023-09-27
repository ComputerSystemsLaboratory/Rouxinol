#include <bits/stdc++.h>
using namespace std;

const int INF = (1LL<<31)-1;

int V, E;

int main(){
    cin >> V >> E;
    vector<vector<int>> D(V, vector<int>(V, INF));
    for(int i=0; i<V; i++)
        D[i][i] = 0;
    
    for(int i=0; i<E; i++){
        int s, t, d;
        cin >> s >> t >> d;
        D[s][t] = d;
    }
    
    for(int k=0; k<V; k++){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(D[i][k] != INF && D[k][j] != INF)
                    D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
            }
        }
    }
    
    bool is_negative = false;
    for(int i=0; i<V; i++)
        is_negative |= D[i][i] < 0;
    
    if(is_negative)
        cout << "NEGATIVE CYCLE" << endl;
    else
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(D[i][j] == INF)
                    cout << "INF";
                else
                    cout << D[i][j];
                if(j < V-1)
                    cout << " ";
            }
            cout << endl;
        }
    
    return 0;
}