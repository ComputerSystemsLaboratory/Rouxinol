#include <iostream>
#include <vector>
#define rep(i,N) for(int i = 0; i<(int)(N); i++)
#define REP(i,k,N) for(int i = k; i<(int)(N); i++)
#define INF 100000000
typedef long long ll;
using namespace std;

int main(){
        int n;
        cin >> n;
        vector< vector<int> > G(n, vector<int>(n,INF));
        int u,k,v,c;
        rep(i,n){
                cin >> u >>k;
                rep(j,k){
                        cin >> v >> c;
                        G[u][v] = c;
                }
        }

        vector<ll> d(n, INF * n);
        d[0]=0;
        bool update = true;
        while(update) {
                update  = false;
                rep(from,n) {
                        if(d[from] >= INF * n) continue;

                        rep(to,n){
                                if(from == to) continue;

                                if(d[to] > d[from] + G[from][to]) {
                                        update = true;
                                        d[to] = d[from] + G[from][to];
                                }

                        }
                }
        }
        rep(i,n){
                cout << i << " " << d[i] << endl;
        }

        return 0;
}

