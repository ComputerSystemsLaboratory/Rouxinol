#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define ALL(x) (x).begin(), (x).end()
#define REP(i ,n) for(int i = 0; i < (int)(n); i++)
#define pb push_back
typedef vector<int>vint;
typedef vector<ll>vll;
template<typename T> istream &operator>>(istream &is, vector<T> &vec){ for (auto &v : vec) is >> v; return is; }
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int main()
{
    int N;
    cin >> N;
    Graph G(N);
    vint dist(N,-1);
    queue<int> que;

    REP(i,N){
        int u,k,v;
        cin >> u >> k;
        u--;
        REP(j,k){
            cin >> v;
            v--;
            G[u].pb(v);
        }
    }

    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(auto nv:G[v]){
            if(dist[nv] != -1)continue;
            dist[nv] = dist[v]+1;
            que.push(nv);
        }
    }

    REP(i,N){
        cout << (i+1) << " " << dist[i] << endl;
    }


}
