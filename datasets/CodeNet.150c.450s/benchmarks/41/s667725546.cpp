#include<iostream>
using namespace std;

long long INF = 10000000000000;

int main(){
    long long V, E;
    cin >> V >> E;
    long long d[V][V];
    for(long long i=0; i<V; i++){
        for(long long j=0; j<V; j++){
            d[i][j] = INF;
        }
        d[i][i] = 0;
    }
    long long s,t,cost;
    for(long long i=0; i<E; i++){
        cin >> s >> t >> cost;
        d[s][t] = cost;
    }
    for(long long k=0; k<V; k++){
        for(long long i=0; i<V; i++){
            for(long long j=0; j<V; j++){
                if(d[i][k] == INF || d[k][j] == INF) continue;
                d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    bool neg_cyc = 0;
    for(long long i=0; i<V; i++){
        if(d[i][i]<0){
            neg_cyc = 1;
        }
    }

    if(neg_cyc == 0){
        for(long long i=0; i<V; i++){
            for(long long j=0; j<V-1; j++){
                if(d[i][j]<INF){
                    cout << d[i][j] << " ";
                }else{
                    cout << "INF" << " ";
                }
            }
            if(d[i][V-1]<INF){
                cout << d[i][V-1] << endl;
            }else{
                cout << "INF" << endl;
            }
        }
    }else{
        cout << "NEGATIVE CYCLE" << endl;
    }
    return 0;
}
