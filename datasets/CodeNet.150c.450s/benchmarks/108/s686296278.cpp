#include <iostream>
#include <queue>
using namespace std;

int n;
bool A[105][105];
int D[105];

void bfs(int src){
    queue<int> Q;
    Q.push(src);
    D[src] = 0;
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        for(int dst=0; dst<105; dst++){
            if(A[cur][dst]==1 && D[dst]==-1){
                D[dst]=D[cur]+1;
                Q.push(dst);
            }
        }
        
    }
}

int main(int argc, const char * argv[]) {
    for(int i=0; i<105; i++){
        for(int j=0; j<105; j++){
            A[i][j] = 0;
        }
    }
    cin >> n;
    for(int i=0; i<n; i++){
        int u;
        int k;
        cin >> u >> k;
        u--;
        for(int j=0; j<k; j++){
            int v;
            cin >> v;
            v--;
            A[u][v] = 1;
        }
    }
    for(int i=0; i<105; i++){
        D[i] = -1;
    }
    bfs(0);
    for(int i=0; i<n; i++){
        cout << i+1 << " " << D[i] << endl;
    }
    return 0;
}