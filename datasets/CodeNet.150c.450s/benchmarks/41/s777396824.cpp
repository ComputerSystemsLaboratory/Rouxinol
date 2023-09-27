#include <iostream>
#include <vector>

using namespace std;

const long long INF = 1LL<<60;

// 1. input
// 2. Floyd_Warshall
// 3. Is there any negative cycle???
// 4. Pirnt ans (if no negative cycle)

void Floyd_Warshall(int n, vector<vector<long long>> &dist){
    
    for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                
                // distance INFのところはpathがないため無視する！！
                if (dist[i][k] == INF || dist[k][j] == INF) continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    
}

int main(void){
    int n,e;
    cin >> n >> e;
    
    vector<vector<long long>> dist(n+1, vector<long long>(n+1, INF));
    
    for (int i = 0; i < n; i++) dist[i][i] = 0;
    
    for (int i = 0; i < e; i++){
        long long s, t, d;
        cin >> s >> t >> d;
        
        dist[s][t] = d;
    }
    
    Floyd_Warshall(n, dist);
    
    // Is there any negative cycle???
    for (int i = 0; i < n; i++){
        if (dist[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    
    //  print ans
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j) cout << " ";
            
            if (dist[i][j] == INF) cout << "INF";
            else cout << dist[i][j];
        }
        cout << endl;
    }
    return 0;
}

