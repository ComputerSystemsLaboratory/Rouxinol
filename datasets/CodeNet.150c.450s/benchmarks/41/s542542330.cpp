#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;
    vector<vector<long long> > G(V, vector<long long>(V));
    for(int i=0; i<V; i++) {
        for(int j=0; j<V; j++) {
            if(i==j) G[i][j]=0;
            else G[i][j]=1000000000000000;
        }
    }
    for(int i=0; i<E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        G[a][b]=c;
    }
    
    for(int k=0; k<V; k++) {
        for(int i=0; i<V; i++) {
            if(G[i][k]==1000000000000000) continue;
            for(int j=0; j<V; j++) {
                if(G[k][j]==1000000000000000) continue;
                G[i][j]=min(G[i][j], G[i][k]+G[k][j]);
            }
        }
    }

    bool negative=false;
    for(int i=0; i<V; i++) {
        if(G[i][i]<0) negative=true;
    }

    if(negative) cout << "NEGATIVE CYCLE" << endl;
    else {
        for(int i=0; i<V; i++) {
            for(int j=0; j<V; j++) {
                if(j) cout << " ";
                if(G[i][j]==1000000000000000) cout << "INF";
                else cout << G[i][j];
            }
            cout << endl;
        }
    }
}
