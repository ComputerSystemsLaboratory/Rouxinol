#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define _GLIBCXX_DEBUG

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vd = vector<double>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvd = vector<vd>;
using vvvi = vector<vvi>;
using vvvll = vector<vvll>;
using vvvd = vector<vvd>;

const double pi=acos(-1);
const ll MOD=1e9+7;
const ll INF=(1LL<<60);

int cost[101][101];
int mincost[101];
int used[101];
int v;

int prim(){
    for (int i=0;i<v;i++){
        mincost[i]=1e9;
        used[i]=0;
    }
    mincost[0]=0;
    int res=0;
    while(1){
        int v1=-1;
        for (int u=0;u<v;u++){
            if (!used[u] && (v1==-1||mincost[u]<mincost[v1]))v1=u;
        }
        if (v1==-1)break;
        used[v1]=1;
        res+=mincost[v1];
        for (int u=0;u<v;u++)mincost[u]=min(mincost[u],cost[v1][u]);
    }
    return res;
}

int main() {
    cin>>v;
    rep(i,v){
        rep(j,v){
            cin>>cost[i][j];
            if (cost[i][j]==-1)cost[i][j]=1e8;
        }
    }
    int ans=0;
    ans=prim();
    cout<<ans<<endl;
    

    return 0;
}
