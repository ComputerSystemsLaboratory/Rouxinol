#include <iostream>
#include <queue>

#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
    int n,u,k,v,src=0;
    cin >> n;
    int D[n],g[n][n];
    REP(i,n){
        D[i] = -1;
        REP(j,n){
            g[i][j] = 0;
        }    
    }
    REP(i,n){ 
        cin >> u >> k;
            REP(j,k){
                cin >> v;
                g[v-1][u-1] = 1;
            }
    }

    queue<int> Q;
    Q.push(src);
    D[src] = 0;
    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();
            REP(i,n){
                if(g[i][cur] == 1 && D[i] < 0){
                    D[i] = D[cur] + 1;
                    Q.push(i);
                }
            }
    }

    REP(i,n){
        cout << i+1 << " " << D[i] << endl;    
    }
}