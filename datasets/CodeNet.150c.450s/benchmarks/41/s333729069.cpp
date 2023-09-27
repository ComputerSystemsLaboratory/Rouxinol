#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i=0;i < (int)(n);i++)
const ll INF = 1LL << 55;

ll d[101][101];

bool can[101];

int main(){
    int V,E;
    cin >> V >> E;
    rep(i,V){
        rep(j,V){
            if(i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }

    rep(i,E){
        int a,b;
        ll cost;
        cin >> a >> b >> cost;
        d[a][b] = cost; 
    }
    for (int i= 0;i < V;i++){
        for (int j = 0; j < V;j++){
            for (int k = 0; k < V;k++){
                d[j][k] = min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }

    for (int i= 0;i < V;i++){
        for (int j = 0; j < V;j++){
            for (int k = 0; k < V;k++){
                if (d[j][k] > d[j][i]+d[i][k]){
                    can[k] = true;
                    cout << "NEGATIVE CYCLE" << endl;
                    return 0;
                }
            }   
        }
    }

    rep(i,V){
        rep(j,V){
            if (0 < j) cout << " ";
            if (d[i][j] >= INF/2) cout << "INF";
            else cout << d[i][j];
        }
        cout << endl;
    }

    return 0;
}


