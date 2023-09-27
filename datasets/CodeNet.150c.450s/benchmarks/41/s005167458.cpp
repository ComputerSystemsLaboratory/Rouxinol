#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

ll A[200][200];
int V;
const ll INF = pow(10, 18);

void warshallFloyd(){
    for (int k = 0; k < V; k++){
        for (int i = 0; i < V; i++){
            for (int j = 0; j < V; j++){
                if(A[i][k] == INF || A[k][j] == INF)continue;
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
    return;
}

int main() {
    cin >> V;
    int E; cin >> E;
    rep(i, V){
        rep(j, V){
            if(i == j){
                A[i][j] = 0;
            } else {
                A[i][j] = INF;
            }
        }
    }
    rep(i, E){
        int s, t, d; cin >> s >> t >> d;
        A[s][t] = d;
    }

    warshallFloyd();

    rep(i, V){
        if(A[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i, V){
        rep(j, V){
            if(A[i][j] == INF){
                cout << "INF";
            } else {
                cout << A[i][j];
            }
            if(j == V-1){
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}
