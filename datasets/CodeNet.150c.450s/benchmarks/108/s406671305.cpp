#include<iostream>
#include<queue>

using namespace std;
#define MAX 100

const int INF = (1<<21);
int mat[MAX][MAX] = {};
int n, d[MAX] = {};
bool c[MAX];

void bfs(int u){
    queue<int> p; 
    int now = 0;
    d[u] = now++;
    c[u] = true;

    p.push(u);
    while(!p.empty()){
        int x = p.front(); p.pop();
        for(int i = 0; i < n; i++){
            if(mat[x][i] && !c[i]){
                p.push(i);
                c[i] = true;
                d[i] = d[x]+1;
            }
        }
    }
}

int main(){
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x, k, y;
        cin >> x >> k;
        while(k-- > 0){
            cin >> y;
            mat[x-1][y-1] = 1;
        }
    }

    for(int i = 0; i < n; i++) d[i] = INF;
    
    bfs(0);

    for(int i = 0; i < n; i++){
        cout << (i+1) << " " << (d[i] == INF ? -1 : d[i]) << endl;
    }
    return 0;
}
