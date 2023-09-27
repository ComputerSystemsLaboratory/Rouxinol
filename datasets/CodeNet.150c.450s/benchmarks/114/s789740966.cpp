#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i< (n);i++)
using namespace std;
typedef long long ll;
const int INF = 1e+7;

struct prim{
    vector<int> color;
    vector<vector<int>> M;
    vector<int> d;
    vector<int> p;
    int n_;
    prim(int n):color(n,0),M(n,vector<int>(n,-1)),d(n,INF),p(n,-1){
        n_ = n;
    }
    void init(){
        rep(i,n_){
            rep(j,n_){
                int tmp;cin>>tmp;
                M[i][j] = tmp;
            }
        }
    }

    void solve(){
        init();
        d[0] = 0;
        p[0] = -1;

        while(true){
            int mincost = INF;
            int u;
            rep(i,n_){
                if(color[i] != 2 && d[i] < mincost ){
                    mincost = d[i];
                    u = i;
                }
            }
            if( mincost == INF){
                break;
            }
            color[u] = 2;

            rep(v,n_){
                if(color[v] != 2 && M[u][v] != -1){
                    if(M[u][v] < d[v]){
                        d[v] = M[u][v];
                        p[v] = u;
                        color[v] = 1;
                    }
                }
            }
        }
        int ans = 0;
        rep(i,n_){
            ans += d[i];
        }
        cout<<ans<<endl;
    }
};

int main(){
    int n;cin >> n;
    prim p(n);
    p.solve();
    return 0;
}
