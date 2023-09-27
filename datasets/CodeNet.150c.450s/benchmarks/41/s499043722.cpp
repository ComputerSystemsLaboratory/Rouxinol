#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include<numeric>
#include<cmath>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,ll> pll;
const ll inf = 1LL << 60;

struct edge{
    int to;
    int cost;
    edge(int a,int b){
        to = a, cost = b;
    }
};

int main(){
    //cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	//cout << fixed << setprecision(15);

    int V,E; cin>>V>>E;
    vector<vector<ll> > G(V,vector<ll>(V,INF));
    REP(i,E){
        ll s,t,d;
        cin>>s>>t>>d;
        G[s][t] = d;
    }
    REP(i,V){
        G[i][i] = 0;
    }
    
    REP(k,V){
        REP(i,V){
            REP(j,V){
                if(G[i][k] != INF && G[k][j] != INF){
                     G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
                }
            }
        }
    }

    bool flag = true;
    REP(i,V){
        if(G[i][i] < 0){
            flag = false; break;
        }
    }
    if(flag){
        REP(i,V){
            REP(k,V){
                if(k != V-1){
                    if(G[i][k] == INF) cout << "INF" << " ";
                else cout << G[i][k] << " ";
                }
                else{
                    if(G[i][k] == INF) cout << "INF" <<endl;
                    else cout << G[i][k] << endl;
                }          
            }
        }
    }
    else{
        cout << "NEGATIVE CYCLE" << endl;
    }
}
