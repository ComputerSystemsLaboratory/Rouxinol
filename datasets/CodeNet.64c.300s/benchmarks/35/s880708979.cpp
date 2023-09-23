#define REP(i,n) for (int i=0;i<(n);i++)
#include <iostream>
using namespace std;
int main(){
        int n,u,k,v;
        cin >> n;
        int g[n][n];
        REP(i,n){
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
        REP(i,n){
                REP(j,n){
                        cout << (j?" ":"") << g[j][i];
                }
                cout << endl;
        }
}