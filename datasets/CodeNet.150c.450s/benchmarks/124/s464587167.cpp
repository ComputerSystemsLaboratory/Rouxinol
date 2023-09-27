#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1 << 29;

int main()
{
    int n,u,k,v,c;
    int V[101][101];
    fill((int*)V, (int*)(V + 101), INF);
    
    cin >> n;
    for(int i = 0; i < n; ++i){
        V[i][i] = 0;
    }
    
    for(int i = 0; i < n; ++i){
        cin >> u >> k;
        for(int j = 0; j < k; ++j){
            cin >> v >> c;
            V[u][v] = c;
        }
    }
    
    for(int k = 0; k < n; ++k){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                V[i][j] = min(V[i][j],V[i][k] + V[k][j]);
            }
        }
    }
    
    for(int i = 0; i < n; ++i){
        cout << i << ' ' << V[0][i] << endl;
    }
    
}