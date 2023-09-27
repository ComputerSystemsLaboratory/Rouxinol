#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define MOD 1000000007
#define INF 1e14
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
template<class T>void p(T x){cout << x << endl;}
template<class T>void pvec(vector<T>& a){rep(i, a.size()-1){cout << a[i] << " ";} cout << a[a.size()-1] << endl;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
 
int main()
{
    int v, e; cin >> v >> e;
    ll d[v][v];
    rep(i, v) rep(j, v) d[i][j] = INF;
    rep(i, v) d[i][i] = 0;

    ll from, to, cost;
    rep(i, e){
        cin >> from >> to >> cost;
        d[from][to] = cost;
    }

    rep(k, v){
        rep(i, v){
            rep(j, v){
                if(d[i][k]==INF || d[k][j]==INF) continue;
                chmin(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    
    rep(i, v){
        if(d[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i, v){
        rep(j, v){
            if(d[i][j] != INF) cout << d[i][j];
            else cout << "INF";
            if(j!=v-1) cout << " ";
        }
        printf("\n");
    }
    return 0;
}
