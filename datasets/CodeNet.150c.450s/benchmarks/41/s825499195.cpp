#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, e; cin >> n >> e;
    vector<vector<long long> > g(n + 1, vector<long long> (n + 1, 1000000000000));
    for(long long i = 0; i < n; i++) g[i][i] = 0;
    for(long long i = 0; i < e; i++){
        long long a, b, d; cin >> a >> b >> d;
        g[a][b] = min(g[a][b], d);
    }

    //ワーシャルフロイド
    for(long long k = 0; k < n; k++){
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < n; j++){
                if(g[i][k] != 1000000000000 && g[k][j] != 1000000000000) g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
                if(i == j && g[i][j] < 0) return !printf("NEGATIVE CYCLE\n");
            }
        }
    }

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            if(g[i][j] == 1000000000000) cout << "INF";
            else cout << g[i][j];

            if(j != n - 1) cout << " ";
            else cout << endl;
        }
    }
}
