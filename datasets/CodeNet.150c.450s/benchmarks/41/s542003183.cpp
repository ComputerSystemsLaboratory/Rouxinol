#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

const int MAX = 100;
const long long  INF = 1e10;

long long M[MAX][MAX];

int main(){
    int V, E;
    cin >> V >> E;

    rep(i,V){
        rep(j,V){
            if(i == j){
                M[i][j] = 0;
            }else{
                M[i][j] = INF;
            }
        }
    }

    int s, t;
    long long d;
    rep(i,E){
        cin >> s >> t >> d;
        M[s][t] = d;
    }

    for(int k = 0; k < V; k++){
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(M[i][k] != INF && M[k][j] != INF){
                    M[i][j] = min(M[i][j], M[i][k] + M[k][j]);
                }
            }
        }
    }


    for(int i = 0; i < V; i++){
        if(M[i][i] < 0){
            printf("NEGATIVE CYCLE\n");
            return 0;
        }
    }
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(M[i][j] == INF){
                printf("INF");
            }else{
                printf("%d", M[i][j]);
            }
            if(j < V - 1){
                printf (" ");
            }
        }
        printf("\n");
    }

    return 0;

}
