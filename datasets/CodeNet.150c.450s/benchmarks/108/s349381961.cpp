#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<int> > adj(110);
    int D[110];
    for(int i = 0; i < n; i++){
        int u, k;
        cin >> u >> k; 
        D[u] = -1;
        for(int j = 0; j < k; j++){
            int v;
            cin >> v;
            adj[u].push_back(v);
        }
    }
    queue<int> Q;
    Q.push(1);
    D[1] = 0;
    while(!Q.empty()){
        int cur = Q.front(); 
        Q.pop();
        for(int i = 0; i < adj[cur].size(); i++){
            int dst = adj[cur][i];
            if(D[dst] == -1){
                D[dst] = D[cur]+1;
                Q.push(dst);
            }
        }
    }
    for (int i = 1; i < n+1; i++){
        cout << i << " " << D[i] << endl;
    }
}